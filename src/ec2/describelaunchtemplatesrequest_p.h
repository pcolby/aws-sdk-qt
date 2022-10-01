// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATESREQUEST_P_H
#define QTAWS_DESCRIBELAUNCHTEMPLATESREQUEST_P_H

#include "ec2request_p.h"
#include "describelaunchtemplatesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplatesRequest;

class DescribeLaunchTemplatesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLaunchTemplatesRequestPrivate(const Ec2Request::Action action,
                                   DescribeLaunchTemplatesRequest * const q);
    DescribeLaunchTemplatesRequestPrivate(const DescribeLaunchTemplatesRequestPrivate &other,
                                   DescribeLaunchTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchTemplatesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
