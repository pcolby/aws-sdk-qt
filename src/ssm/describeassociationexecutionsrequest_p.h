// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeassociationexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionsRequest;

class DescribeAssociationExecutionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAssociationExecutionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeAssociationExecutionsRequest * const q);
    DescribeAssociationExecutionsRequestPrivate(const DescribeAssociationExecutionsRequestPrivate &other,
                                   DescribeAssociationExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
