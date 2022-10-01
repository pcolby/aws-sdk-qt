// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSRESPONSE_H
#define QTAWS_LISTFLEETSRESPONSE_H

#include "gameliftresponse.h"
#include "listfleetsrequest.h"

namespace QtAws {
namespace GameLift {

class ListFleetsResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListFleetsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListFleetsResponse(const ListFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFleetsResponse)
    Q_DISABLE_COPY(ListFleetsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
