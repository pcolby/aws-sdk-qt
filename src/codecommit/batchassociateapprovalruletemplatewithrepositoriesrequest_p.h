// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESREQUEST_P_H
#define QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "batchassociateapprovalruletemplatewithrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchAssociateApprovalRuleTemplateWithRepositoriesRequest;

class BatchAssociateApprovalRuleTemplateWithRepositoriesRequestPrivate : public CodeCommitRequestPrivate {

public:
    BatchAssociateApprovalRuleTemplateWithRepositoriesRequestPrivate(const CodeCommitRequest::Action action,
                                   BatchAssociateApprovalRuleTemplateWithRepositoriesRequest * const q);
    BatchAssociateApprovalRuleTemplateWithRepositoriesRequestPrivate(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequestPrivate &other,
                                   BatchAssociateApprovalRuleTemplateWithRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateApprovalRuleTemplateWithRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
