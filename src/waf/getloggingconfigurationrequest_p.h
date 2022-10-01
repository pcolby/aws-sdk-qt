// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafrequest_p.h"
#include "getloggingconfigurationrequest.h"

namespace QtAws {
namespace Waf {

class GetLoggingConfigurationRequest;

class GetLoggingConfigurationRequestPrivate : public WafRequestPrivate {

public:
    GetLoggingConfigurationRequestPrivate(const WafRequest::Action action,
                                   GetLoggingConfigurationRequest * const q);
    GetLoggingConfigurationRequestPrivate(const GetLoggingConfigurationRequestPrivate &other,
                                   GetLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggingConfigurationRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
