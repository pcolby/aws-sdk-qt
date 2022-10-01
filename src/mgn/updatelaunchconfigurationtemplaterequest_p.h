// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_UPDATELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "updatelaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class UpdateLaunchConfigurationTemplateRequest;

class UpdateLaunchConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    UpdateLaunchConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   UpdateLaunchConfigurationTemplateRequest * const q);
    UpdateLaunchConfigurationTemplateRequestPrivate(const UpdateLaunchConfigurationTemplateRequestPrivate &other,
                                   UpdateLaunchConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLaunchConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
