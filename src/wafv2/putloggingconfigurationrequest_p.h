// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafv2request_p.h"
#include "putloggingconfigurationrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutLoggingConfigurationRequest;

class PutLoggingConfigurationRequestPrivate : public Wafv2RequestPrivate {

public:
    PutLoggingConfigurationRequestPrivate(const Wafv2Request::Action action,
                                   PutLoggingConfigurationRequest * const q);
    PutLoggingConfigurationRequestPrivate(const PutLoggingConfigurationRequestPrivate &other,
                                   PutLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLoggingConfigurationRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
