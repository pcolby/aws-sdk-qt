// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationVersionsResponse;

class DescribeApplicationVersionsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeApplicationVersionsResponsePrivate(DescribeApplicationVersionsResponse * const q);

    void parseDescribeApplicationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationVersionsResponse)
    Q_DISABLE_COPY(DescribeApplicationVersionsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
