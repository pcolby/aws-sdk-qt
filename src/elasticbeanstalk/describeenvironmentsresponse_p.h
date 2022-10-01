// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentsResponse;

class DescribeEnvironmentsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEnvironmentsResponsePrivate(DescribeEnvironmentsResponse * const q);

    void parseDescribeEnvironmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
