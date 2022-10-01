// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSRESPONSE_H
#define QTAWS_LISTBUILDSRESPONSE_H

#include "gameliftresponse.h"
#include "listbuildsrequest.h"

namespace QtAws {
namespace GameLift {

class ListBuildsResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListBuildsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListBuildsResponse(const ListBuildsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuildsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildsResponse)
    Q_DISABLE_COPY(ListBuildsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
