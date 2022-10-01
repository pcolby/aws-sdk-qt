// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEDEPLOYMENTREQUEST_P_H
#define QTAWS_GETSTAGEDEPLOYMENTREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getstagedeploymentrequest.h"

namespace QtAws {
namespace GameSparks {

class GetStageDeploymentRequest;

class GetStageDeploymentRequestPrivate : public GameSparksRequestPrivate {

public:
    GetStageDeploymentRequestPrivate(const GameSparksRequest::Action action,
                                   GetStageDeploymentRequest * const q);
    GetStageDeploymentRequestPrivate(const GetStageDeploymentRequestPrivate &other,
                                   GetStageDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStageDeploymentRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
