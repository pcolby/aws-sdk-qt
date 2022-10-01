// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONREQUEST_P_H
#define QTAWS_DESCRIBEASSOCIATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeassociationrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationRequest;

class DescribeAssociationRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAssociationRequestPrivate(const SsmRequest::Action action,
                                   DescribeAssociationRequest * const q);
    DescribeAssociationRequestPrivate(const DescribeAssociationRequestPrivate &other,
                                   DescribeAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
