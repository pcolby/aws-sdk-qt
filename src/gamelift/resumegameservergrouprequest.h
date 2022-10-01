// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEGAMESERVERGROUPREQUEST_H
#define QTAWS_RESUMEGAMESERVERGROUPREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ResumeGameServerGroupRequestPrivate;

class QTAWSGAMELIFT_EXPORT ResumeGameServerGroupRequest : public GameLiftRequest {

public:
    ResumeGameServerGroupRequest(const ResumeGameServerGroupRequest &other);
    ResumeGameServerGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
