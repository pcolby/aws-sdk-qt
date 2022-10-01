// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEGROUPSNAMESPACEREQUEST_P_H
#define QTAWS_PUTRULEGROUPSNAMESPACEREQUEST_P_H

#include "amprequest_p.h"
#include "putrulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class PutRuleGroupsNamespaceRequest;

class PutRuleGroupsNamespaceRequestPrivate : public AmpRequestPrivate {

public:
    PutRuleGroupsNamespaceRequestPrivate(const AmpRequest::Action action,
                                   PutRuleGroupsNamespaceRequest * const q);
    PutRuleGroupsNamespaceRequestPrivate(const PutRuleGroupsNamespaceRequestPrivate &other,
                                   PutRuleGroupsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
