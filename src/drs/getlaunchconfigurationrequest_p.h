// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLAUNCHCONFIGURATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "getlaunchconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class GetLaunchConfigurationRequest;

class GetLaunchConfigurationRequestPrivate : public DrsRequestPrivate {

public:
    GetLaunchConfigurationRequestPrivate(const DrsRequest::Action action,
                                   GetLaunchConfigurationRequest * const q);
    GetLaunchConfigurationRequestPrivate(const GetLaunchConfigurationRequestPrivate &other,
                                   GetLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
