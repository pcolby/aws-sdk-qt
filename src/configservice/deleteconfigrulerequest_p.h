// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRULEREQUEST_P_H
#define QTAWS_DELETECONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigRuleRequest;

class DeleteConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteConfigRuleRequest * const q);
    DeleteConfigRuleRequestPrivate(const DeleteConfigRuleRequestPrivate &other,
                                   DeleteConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
