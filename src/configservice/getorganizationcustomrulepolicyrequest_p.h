// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYREQUEST_P_H
#define QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getorganizationcustomrulepolicyrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationCustomRulePolicyRequest;

class GetOrganizationCustomRulePolicyRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetOrganizationCustomRulePolicyRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetOrganizationCustomRulePolicyRequest * const q);
    GetOrganizationCustomRulePolicyRequestPrivate(const GetOrganizationCustomRulePolicyRequestPrivate &other,
                                   GetOrganizationCustomRulePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrganizationCustomRulePolicyRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
