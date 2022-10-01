// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERGROUPRESPONSE_H
#define QTAWS_UPDATEGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "updategameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateGameServerGroupResponse(const UpdateGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameServerGroupResponse)
    Q_DISABLE_COPY(UpdateGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
