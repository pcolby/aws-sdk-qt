// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATELAUNCHCONFIGURATIONTEMPLATEREQUEST_P_H

#include "mgnrequest_p.h"
#include "createlaunchconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class CreateLaunchConfigurationTemplateRequest;

class CreateLaunchConfigurationTemplateRequestPrivate : public MgnRequestPrivate {

public:
    CreateLaunchConfigurationTemplateRequestPrivate(const MgnRequest::Action action,
                                   CreateLaunchConfigurationTemplateRequest * const q);
    CreateLaunchConfigurationTemplateRequestPrivate(const CreateLaunchConfigurationTemplateRequestPrivate &other,
                                   CreateLaunchConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
