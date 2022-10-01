// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESERVERGROUPRESPONSE_H
#define QTAWS_CREATEGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "creategameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateGameServerGroupResponse(const CreateGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameServerGroupResponse)
    Q_DISABLE_COPY(CreateGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
