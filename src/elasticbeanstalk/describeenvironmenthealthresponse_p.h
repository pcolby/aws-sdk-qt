// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTHEALTHRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentHealthResponse;

class DescribeEnvironmentHealthResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEnvironmentHealthResponsePrivate(DescribeEnvironmentHealthResponse * const q);

    void parseDescribeEnvironmentHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentHealthResponse)
    Q_DISABLE_COPY(DescribeEnvironmentHealthResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
