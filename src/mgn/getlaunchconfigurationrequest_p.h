// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLAUNCHCONFIGURATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "getlaunchconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class GetLaunchConfigurationRequest;

class GetLaunchConfigurationRequestPrivate : public MgnRequestPrivate {

public:
    GetLaunchConfigurationRequestPrivate(const MgnRequest::Action action,
                                   GetLaunchConfigurationRequest * const q);
    GetLaunchConfigurationRequestPrivate(const GetLaunchConfigurationRequestPrivate &other,
                                   GetLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
