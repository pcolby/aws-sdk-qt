// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHTEMPLATEDATAREQUEST_P_H
#define QTAWS_GETLAUNCHTEMPLATEDATAREQUEST_P_H

#include "ec2request_p.h"
#include "getlaunchtemplatedatarequest.h"

namespace QtAws {
namespace Ec2 {

class GetLaunchTemplateDataRequest;

class GetLaunchTemplateDataRequestPrivate : public Ec2RequestPrivate {

public:
    GetLaunchTemplateDataRequestPrivate(const Ec2Request::Action action,
                                   GetLaunchTemplateDataRequest * const q);
    GetLaunchTemplateDataRequestPrivate(const GetLaunchTemplateDataRequestPrivate &other,
                                   GetLaunchTemplateDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLaunchTemplateDataRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
