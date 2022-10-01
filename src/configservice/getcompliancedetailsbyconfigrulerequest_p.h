// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULEREQUEST_P_H
#define QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcompliancedetailsbyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByConfigRuleRequest;

class GetComplianceDetailsByConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetComplianceDetailsByConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetComplianceDetailsByConfigRuleRequest * const q);
    GetComplianceDetailsByConfigRuleRequestPrivate(const GetComplianceDetailsByConfigRuleRequestPrivate &other,
                                   GetComplianceDetailsByConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailsByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
