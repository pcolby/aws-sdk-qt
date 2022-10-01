// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeeffectiveinstanceassociationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectiveInstanceAssociationsRequest;

class DescribeEffectiveInstanceAssociationsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeEffectiveInstanceAssociationsRequestPrivate(const SsmRequest::Action action,
                                   DescribeEffectiveInstanceAssociationsRequest * const q);
    DescribeEffectiveInstanceAssociationsRequestPrivate(const DescribeEffectiveInstanceAssociationsRequestPrivate &other,
                                   DescribeEffectiveInstanceAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEffectiveInstanceAssociationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
