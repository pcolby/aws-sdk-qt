// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYREQUEST_P_H
#define QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "associateapprovalruletemplatewithrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class AssociateApprovalRuleTemplateWithRepositoryRequest;

class AssociateApprovalRuleTemplateWithRepositoryRequestPrivate : public CodeCommitRequestPrivate {

public:
    AssociateApprovalRuleTemplateWithRepositoryRequestPrivate(const CodeCommitRequest::Action action,
                                   AssociateApprovalRuleTemplateWithRepositoryRequest * const q);
    AssociateApprovalRuleTemplateWithRepositoryRequestPrivate(const AssociateApprovalRuleTemplateWithRepositoryRequestPrivate &other,
                                   AssociateApprovalRuleTemplateWithRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateApprovalRuleTemplateWithRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
