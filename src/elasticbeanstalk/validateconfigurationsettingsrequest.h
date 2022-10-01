// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONSETTINGSREQUEST_H
#define QTAWS_VALIDATECONFIGURATIONSETTINGSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ValidateConfigurationSettingsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ValidateConfigurationSettingsRequest : public ElasticBeanstalkRequest {

public:
    ValidateConfigurationSettingsRequest(const ValidateConfigurationSettingsRequest &other);
    ValidateConfigurationSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateConfigurationSettingsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
