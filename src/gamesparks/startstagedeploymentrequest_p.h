// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTAGEDEPLOYMENTREQUEST_P_H
#define QTAWS_STARTSTAGEDEPLOYMENTREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "startstagedeploymentrequest.h"

namespace QtAws {
namespace GameSparks {

class StartStageDeploymentRequest;

class StartStageDeploymentRequestPrivate : public GameSparksRequestPrivate {

public:
    StartStageDeploymentRequestPrivate(const GameSparksRequest::Action action,
                                   StartStageDeploymentRequest * const q);
    StartStageDeploymentRequestPrivate(const StartStageDeploymentRequestPrivate &other,
                                   StartStageDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStageDeploymentRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
