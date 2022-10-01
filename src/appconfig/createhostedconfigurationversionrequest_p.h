// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "createhostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateHostedConfigurationVersionRequest;

class CreateHostedConfigurationVersionRequestPrivate : public AppConfigRequestPrivate {

public:
    CreateHostedConfigurationVersionRequestPrivate(const AppConfigRequest::Action action,
                                   CreateHostedConfigurationVersionRequest * const q);
    CreateHostedConfigurationVersionRequestPrivate(const CreateHostedConfigurationVersionRequestPrivate &other,
                                   CreateHostedConfigurationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
