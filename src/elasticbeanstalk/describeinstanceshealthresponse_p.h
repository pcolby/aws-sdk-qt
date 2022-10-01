// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCESHEALTHRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeInstancesHealthResponse;

class DescribeInstancesHealthResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeInstancesHealthResponsePrivate(DescribeInstancesHealthResponse * const q);

    void parseDescribeInstancesHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesHealthResponse)
    Q_DISABLE_COPY(DescribeInstancesHealthResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
