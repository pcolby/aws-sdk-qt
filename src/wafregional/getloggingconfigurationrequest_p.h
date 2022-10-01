// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getloggingconfigurationrequest.h"

namespace QtAws {
namespace WafRegional {

class GetLoggingConfigurationRequest;

class GetLoggingConfigurationRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetLoggingConfigurationRequestPrivate(const WafRegionalRequest::Action action,
                                   GetLoggingConfigurationRequest * const q);
    GetLoggingConfigurationRequestPrivate(const GetLoggingConfigurationRequestPrivate &other,
                                   GetLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
