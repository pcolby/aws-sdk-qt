// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_PUTREMEDIATIONCONFIGURATIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "putremediationconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationConfigurationsRequest;

class PutRemediationConfigurationsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutRemediationConfigurationsRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutRemediationConfigurationsRequest * const q);
    PutRemediationConfigurationsRequestPrivate(const PutRemediationConfigurationsRequestPrivate &other,
                                   PutRemediationConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRemediationConfigurationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
