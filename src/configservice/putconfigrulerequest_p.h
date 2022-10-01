// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGRULEREQUEST_P_H
#define QTAWS_PUTCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "putconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigRuleRequest;

class PutConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutConfigRuleRequest * const q);
    PutConfigRuleRequestPrivate(const PutConfigRuleRequestPrivate &other,
                                   PutConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
