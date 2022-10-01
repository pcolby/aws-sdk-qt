// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describelaunchtemplateversionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplateVersionsRequest;

class DescribeLaunchTemplateVersionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeLaunchTemplateVersionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeLaunchTemplateVersionsRequest * const q);
    DescribeLaunchTemplateVersionsRequestPrivate(const DescribeLaunchTemplateVersionsRequestPrivate &other,
                                   DescribeLaunchTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchTemplateVersionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
