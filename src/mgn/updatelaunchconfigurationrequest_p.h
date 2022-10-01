// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "updatelaunchconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateLaunchConfigurationRequest;

class UpdateLaunchConfigurationRequestPrivate : public MgnRequestPrivate {

public:
    UpdateLaunchConfigurationRequestPrivate(const MgnRequest::Action action,
                                   UpdateLaunchConfigurationRequest * const q);
    UpdateLaunchConfigurationRequestPrivate(const UpdateLaunchConfigurationRequestPrivate &other,
                                   UpdateLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
