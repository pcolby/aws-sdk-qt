// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_P_H
#define QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ValidateConfigurationSettingsResponse;

class ValidateConfigurationSettingsResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ValidateConfigurationSettingsResponsePrivate(ValidateConfigurationSettingsResponse * const q);

    void parseValidateConfigurationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateConfigurationSettingsResponse)
    Q_DISABLE_COPY(ValidateConfigurationSettingsResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
