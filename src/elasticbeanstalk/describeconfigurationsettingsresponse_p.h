// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETTINGSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationSettingsResponse;

class DescribeConfigurationSettingsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DescribeConfigurationSettingsResponsePrivate(DescribeConfigurationSettingsResponse * const q);

    void parseDescribeConfigurationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSettingsResponse)
    Q_DISABLE_COPY(DescribeConfigurationSettingsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
