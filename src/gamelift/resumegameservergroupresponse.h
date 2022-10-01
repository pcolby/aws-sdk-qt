// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEGAMESERVERGROUPRESPONSE_H
#define QTAWS_RESUMEGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "resumegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class ResumeGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT ResumeGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ResumeGameServerGroupResponse(const ResumeGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeGameServerGroupResponse)
    Q_DISABLE_COPY(ResumeGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
