// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESERVERGROUPRESPONSE_H
#define QTAWS_DELETEGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "deletegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteGameServerGroupResponse(const DeleteGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGameServerGroupResponse)
    Q_DISABLE_COPY(DeleteGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
