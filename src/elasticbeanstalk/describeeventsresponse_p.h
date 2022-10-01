// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEventsResponse;

class DescribeEventsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeEventsResponsePrivate(DescribeEventsResponse * const q);

    void parseDescribeEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventsResponse)
    Q_DISABLE_COPY(DescribeEventsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
