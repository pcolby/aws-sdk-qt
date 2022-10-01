// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLAUNCHTEMPLATEREQUEST_P_H
#define QTAWS_MODIFYLAUNCHTEMPLATEREQUEST_P_H

#include "ec2request_p.h"
#include "modifylaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyLaunchTemplateRequest;

class ModifyLaunchTemplateRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyLaunchTemplateRequestPrivate(const Ec2Request::Action action,
                                   ModifyLaunchTemplateRequest * const q);
    ModifyLaunchTemplateRequestPrivate(const ModifyLaunchTemplateRequestPrivate &other,
                                   ModifyLaunchTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
