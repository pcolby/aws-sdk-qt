// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEREQUEST_P_H
#define QTAWS_CREATELAUNCHTEMPLATEREQUEST_P_H

#include "ec2request_p.h"
#include "createlaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateRequest;

class CreateLaunchTemplateRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLaunchTemplateRequestPrivate(const Ec2Request::Action action,
                                   CreateLaunchTemplateRequest * const q);
    CreateLaunchTemplateRequestPrivate(const CreateLaunchTemplateRequestPrivate &other,
                                   CreateLaunchTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
