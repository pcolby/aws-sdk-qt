// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONREQUEST_P_H
#define QTAWS_VALIDATECONFIGURATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "validateconfigurationrequest.h"

namespace QtAws {
namespace AppConfig {

class ValidateConfigurationRequest;

class ValidateConfigurationRequestPrivate : public AppConfigRequestPrivate {

public:
    ValidateConfigurationRequestPrivate(const AppConfigRequest::Action action,
                                   ValidateConfigurationRequest * const q);
    ValidateConfigurationRequestPrivate(const ValidateConfigurationRequestPrivate &other,
                                   ValidateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateConfigurationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
