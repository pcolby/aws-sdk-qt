// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFIGRULEREQUEST_P_H
#define QTAWS_PUTORGANIZATIONCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "putorganizationconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConfigRuleRequest;

class PutOrganizationConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutOrganizationConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutOrganizationConfigRuleRequest * const q);
    PutOrganizationConfigRuleRequestPrivate(const PutOrganizationConfigRuleRequestPrivate &other,
                                   PutOrganizationConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutOrganizationConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
