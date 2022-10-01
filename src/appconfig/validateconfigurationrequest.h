// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONREQUEST_H
#define QTAWS_VALIDATECONFIGURATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class ValidateConfigurationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT ValidateConfigurationRequest : public AppConfigRequest {

public:
    ValidateConfigurationRequest(const ValidateConfigurationRequest &other);
    ValidateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateConfigurationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
