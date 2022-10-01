// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_P_H

#include "wafrequest_p.h"
#include "putloggingconfigurationrequest.h"

namespace QtAws {
namespace Waf {

class PutLoggingConfigurationRequest;

class PutLoggingConfigurationRequestPrivate : public WafRequestPrivate {

public:
    PutLoggingConfigurationRequestPrivate(const WafRequest::Action action,
                                   PutLoggingConfigurationRequest * const q);
    PutLoggingConfigurationRequestPrivate(const PutLoggingConfigurationRequestPrivate &other,
                                   PutLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLoggingConfigurationRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
