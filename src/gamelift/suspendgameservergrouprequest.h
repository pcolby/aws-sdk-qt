// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDGAMESERVERGROUPREQUEST_H
#define QTAWS_SUSPENDGAMESERVERGROUPREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class SuspendGameServerGroupRequestPrivate;

class QTAWSGAMELIFT_EXPORT SuspendGameServerGroupRequest : public GameLiftRequest {

public:
    SuspendGameServerGroupRequest(const SuspendGameServerGroupRequest &other);
    SuspendGameServerGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuspendGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
