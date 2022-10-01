// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPSNAMESPACEREQUEST_P_H
#define QTAWS_DELETERULEGROUPSNAMESPACEREQUEST_P_H

#include "amprequest_p.h"
#include "deleterulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class DeleteRuleGroupsNamespaceRequest;

class DeleteRuleGroupsNamespaceRequestPrivate : public AmpRequestPrivate {

public:
    DeleteRuleGroupsNamespaceRequestPrivate(const AmpRequest::Action action,
                                   DeleteRuleGroupsNamespaceRequest * const q);
    DeleteRuleGroupsNamespaceRequestPrivate(const DeleteRuleGroupsNamespaceRequestPrivate &other,
                                   DeleteRuleGroupsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupsNamespaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
