// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEMATCHMAKINGCONFIGURATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "creatematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingConfigurationRequest;

class CreateMatchmakingConfigurationRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateMatchmakingConfigurationRequestPrivate(const GameLiftRequest::Action action,
                                   CreateMatchmakingConfigurationRequest * const q);
    CreateMatchmakingConfigurationRequestPrivate(const CreateMatchmakingConfigurationRequestPrivate &other,
                                   CreateMatchmakingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
