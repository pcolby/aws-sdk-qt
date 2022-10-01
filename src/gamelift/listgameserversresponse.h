// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERSRESPONSE_H
#define QTAWS_LISTGAMESERVERSRESPONSE_H

#include "gameliftresponse.h"
#include "listgameserversrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServersResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListGameServersResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListGameServersResponse(const ListGameServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGameServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGameServersResponse)
    Q_DISABLE_COPY(ListGameServersResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
