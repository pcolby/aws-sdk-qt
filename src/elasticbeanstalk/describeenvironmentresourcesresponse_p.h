// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTRESOURCESRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTRESOURCESRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentResourcesResponse;

class DescribeEnvironmentResourcesResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEnvironmentResourcesResponsePrivate(DescribeEnvironmentResourcesResponse * const q);

    void parseDescribeEnvironmentResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentResourcesResponse)
    Q_DISABLE_COPY(DescribeEnvironmentResourcesResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
