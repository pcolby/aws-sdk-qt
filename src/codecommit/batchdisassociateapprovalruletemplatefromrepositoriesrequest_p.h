// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "batchdisassociateapprovalruletemplatefromrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest;

class BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestPrivate : public CodeCommitRequestPrivate {

public:
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestPrivate(const CodeCommitRequest::Action action,
                                   BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest * const q);
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestPrivate(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestPrivate &other,
                                   BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
