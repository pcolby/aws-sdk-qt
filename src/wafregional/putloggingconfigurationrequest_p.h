// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "putloggingconfigurationrequest.h"

namespace QtAws {
namespace WafRegional {

class PutLoggingConfigurationRequest;

class PutLoggingConfigurationRequestPrivate : public WafRegionalRequestPrivate {

public:
    PutLoggingConfigurationRequestPrivate(const WafRegionalRequest::Action action,
                                   PutLoggingConfigurationRequest * const q);
    PutLoggingConfigurationRequestPrivate(const PutLoggingConfigurationRequestPrivate &other,
                                   PutLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
