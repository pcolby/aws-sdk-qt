// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafv2request_p.h"
#include "getloggingconfigurationrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetLoggingConfigurationRequest;

class GetLoggingConfigurationRequestPrivate : public Wafv2RequestPrivate {

public:
    GetLoggingConfigurationRequestPrivate(const Wafv2Request::Action action,
                                   GetLoggingConfigurationRequest * const q);
    GetLoggingConfigurationRequestPrivate(const GetLoggingConfigurationRequestPrivate &other,
                                   GetLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggingConfigurationRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
