// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSREQUEST_P_H
#define QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getorganizationconfigruledetailedstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConfigRuleDetailedStatusRequest;

class GetOrganizationConfigRuleDetailedStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetOrganizationConfigRuleDetailedStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetOrganizationConfigRuleDetailedStatusRequest * const q);
    GetOrganizationConfigRuleDetailedStatusRequestPrivate(const GetOrganizationConfigRuleDetailedStatusRequestPrivate &other,
                                   GetOrganizationConfigRuleDetailedStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrganizationConfigRuleDetailedStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
