// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERUNTIMECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATERUNTIMECONFIGURATIONREQUEST_P_H

#include "gameliftrequest_p.h"
#include "updateruntimeconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateRuntimeConfigurationRequest;

class UpdateRuntimeConfigurationRequestPrivate : public GameLiftRequestPrivate {

public:
    UpdateRuntimeConfigurationRequestPrivate(const GameLiftRequest::Action action,
                                   UpdateRuntimeConfigurationRequest * const q);
    UpdateRuntimeConfigurationRequestPrivate(const UpdateRuntimeConfigurationRequestPrivate &other,
                                   UpdateRuntimeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuntimeConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
