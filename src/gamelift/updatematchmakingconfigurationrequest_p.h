// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMATCHMAKINGCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEMATCHMAKINGCONFIGURATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updatematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateMatchmakingConfigurationRequest;

class UpdateMatchmakingConfigurationRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateMatchmakingConfigurationRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateMatchmakingConfigurationRequest * const q);
    UpdateMatchmakingConfigurationRequestPrivate(const UpdateMatchmakingConfigurationRequestPrivate &other,
                                   UpdateMatchmakingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
