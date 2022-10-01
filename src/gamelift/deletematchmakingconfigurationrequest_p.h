// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEMATCHMAKINGCONFIGURATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingConfigurationRequest;

class DeleteMatchmakingConfigurationRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteMatchmakingConfigurationRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteMatchmakingConfigurationRequest * const q);
    DeleteMatchmakingConfigurationRequestPrivate(const DeleteMatchmakingConfigurationRequestPrivate &other,
                                   DeleteMatchmakingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
