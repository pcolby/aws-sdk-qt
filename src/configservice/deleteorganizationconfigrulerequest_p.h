// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFIGRULEREQUEST_P_H
#define QTAWS_DELETEORGANIZATIONCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteorganizationconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConfigRuleRequest;

class DeleteOrganizationConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteOrganizationConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteOrganizationConfigRuleRequest * const q);
    DeleteOrganizationConfigRuleRequestPrivate(const DeleteOrganizationConfigRuleRequestPrivate &other,
                                   DeleteOrganizationConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
