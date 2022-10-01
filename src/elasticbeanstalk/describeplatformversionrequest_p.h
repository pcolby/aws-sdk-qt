// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLATFORMVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEPLATFORMVERSIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribePlatformVersionRequest;

class DescribePlatformVersionRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribePlatformVersionRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribePlatformVersionRequest * const q);
    DescribePlatformVersionRequestPrivate(const DescribePlatformVersionRequestPrivate &other,
                                   DescribePlatformVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
