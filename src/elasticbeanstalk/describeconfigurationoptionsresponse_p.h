// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONOPTIONSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationOptionsResponse;

class DescribeConfigurationOptionsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeConfigurationOptionsResponsePrivate(DescribeConfigurationOptionsResponse * const q);

    void parseDescribeConfigurationOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationOptionsResponse)
    Q_DISABLE_COPY(DescribeConfigurationOptionsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
