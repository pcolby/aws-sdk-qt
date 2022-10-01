// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMRULEPOLICYREQUEST_P_H
#define QTAWS_GETCUSTOMRULEPOLICYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcustomrulepolicyrequest.h"

namespace QtAws {
namespace ConfigService {

class GetCustomRulePolicyRequest;

class GetCustomRulePolicyRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetCustomRulePolicyRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetCustomRulePolicyRequest * const q);
    GetCustomRulePolicyRequestPrivate(const GetCustomRulePolicyRequestPrivate &other,
                                   GetCustomRulePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomRulePolicyRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
