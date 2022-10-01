// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDCONFIGURATIONVERSIONREQUEST_P_H
#define QTAWS_GETHOSTEDCONFIGURATIONVERSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "gethostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class GetHostedConfigurationVersionRequest;

class GetHostedConfigurationVersionRequestPrivate : public AppConfigRequestPrivate {

public:
    GetHostedConfigurationVersionRequestPrivate(const AppConfigRequest::Action action,
                                   GetHostedConfigurationVersionRequest * const q);
    GetHostedConfigurationVersionRequestPrivate(const GetHostedConfigurationVersionRequestPrivate &other,
                                   GetHostedConfigurationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
