// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMINSTANCEPROFILEASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEIAMINSTANCEPROFILEASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describeiaminstanceprofileassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIamInstanceProfileAssociationsRequest;

class DescribeIamInstanceProfileAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIamInstanceProfileAssociationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeIamInstanceProfileAssociationsRequest * const q);
    DescribeIamInstanceProfileAssociationsRequestPrivate(const DescribeIamInstanceProfileAssociationsRequestPrivate &other,
                                   DescribeIamInstanceProfileAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIamInstanceProfileAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
