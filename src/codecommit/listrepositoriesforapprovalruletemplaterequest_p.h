// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATEREQUEST_P_H
#define QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listrepositoriesforapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesForApprovalRuleTemplateRequest;

class ListRepositoriesForApprovalRuleTemplateRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListRepositoriesForApprovalRuleTemplateRequestPrivate(const CodeCommitRequest::Action action,
                                   ListRepositoriesForApprovalRuleTemplateRequest * const q);
    ListRepositoriesForApprovalRuleTemplateRequestPrivate(const ListRepositoriesForApprovalRuleTemplateRequestPrivate &other,
                                   ListRepositoriesForApprovalRuleTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesForApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
