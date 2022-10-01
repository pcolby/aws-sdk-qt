// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICGPUSREQUEST_P_H
#define QTAWS_DESCRIBEELASTICGPUSREQUEST_P_H

#include "ec2request_p.h"
#include "describeelasticgpusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeElasticGpusRequest;

class DescribeElasticGpusRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeElasticGpusRequestPrivate(const Ec2Request::Action action,
                                   DescribeElasticGpusRequest * const q);
    DescribeElasticGpusRequestPrivate(const DescribeElasticGpusRequestPrivate &other,
                                   DescribeElasticGpusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticGpusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
