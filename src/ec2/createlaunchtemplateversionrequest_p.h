// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_CREATELAUNCHTEMPLATEVERSIONREQUEST_P_H

#include "ec2request_p.h"
#include "createlaunchtemplateversionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateVersionRequest;

class CreateLaunchTemplateVersionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateLaunchTemplateVersionRequestPrivate(const Ec2Request::Action action,
                                   CreateLaunchTemplateVersionRequest * const q);
    CreateLaunchTemplateVersionRequestPrivate(const CreateLaunchTemplateVersionRequestPrivate &other,
                                   CreateLaunchTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchTemplateVersionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
