// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONSETTINGSREQUEST_P_H
#define QTAWS_VALIDATECONFIGURATIONSETTINGSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "validateconfigurationsettingsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ValidateConfigurationSettingsRequest;

class ValidateConfigurationSettingsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    ValidateConfigurationSettingsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   ValidateConfigurationSettingsRequest * const q);
    ValidateConfigurationSettingsRequestPrivate(const ValidateConfigurationSettingsRequestPrivate &other,
                                   ValidateConfigurationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateConfigurationSettingsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
