// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDGAMESERVERGROUPRESPONSE_H
#define QTAWS_SUSPENDGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "suspendgameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class SuspendGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT SuspendGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    SuspendGameServerGroupResponse(const SuspendGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SuspendGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuspendGameServerGroupResponse)
    Q_DISABLE_COPY(SuspendGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
