// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATEREQUEST_P_H
#define QTAWS_DELETELAUNCHTEMPLATEREQUEST_P_H

#include "ec2request_p.h"
#include "deletelaunchtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateRequest;

class DeleteLaunchTemplateRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteLaunchTemplateRequestPrivate(const Ec2Request::Action action,
                                   DeleteLaunchTemplateRequest * const q);
    DeleteLaunchTemplateRequestPrivate(const DeleteLaunchTemplateRequestPrivate &other,
                                   DeleteLaunchTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
