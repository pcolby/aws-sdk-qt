// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERGROUPSRESPONSE_H
#define QTAWS_LISTGAMESERVERGROUPSRESPONSE_H

#include "gameliftresponse.h"
#include "listgameservergroupsrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServerGroupsResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListGameServerGroupsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListGameServerGroupsResponse(const ListGameServerGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGameServerGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGameServerGroupsResponse)
    Q_DISABLE_COPY(ListGameServerGroupsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
