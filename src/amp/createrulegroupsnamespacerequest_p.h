// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPSNAMESPACEREQUEST_P_H
#define QTAWS_CREATERULEGROUPSNAMESPACEREQUEST_P_H

#include "amprequest_p.h"
#include "createrulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class CreateRuleGroupsNamespaceRequest;

class CreateRuleGroupsNamespaceRequestPrivate : public AmpRequestPrivate {

public:
    CreateRuleGroupsNamespaceRequestPrivate(const AmpRequest::Action action,
                                   CreateRuleGroupsNamespaceRequest * const q);
    CreateRuleGroupsNamespaceRequestPrivate(const CreateRuleGroupsNamespaceRequestPrivate &other,
                                   CreateRuleGroupsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
