// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYREQUEST_P_H
#define QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "disassociateapprovalruletemplatefromrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class DisassociateApprovalRuleTemplateFromRepositoryRequest;

class DisassociateApprovalRuleTemplateFromRepositoryRequestPrivate : public CodeCommitRequestPrivate {

public:
    DisassociateApprovalRuleTemplateFromRepositoryRequestPrivate(const CodeCommitRequest::Action action,
                                   DisassociateApprovalRuleTemplateFromRepositoryRequest * const q);
    DisassociateApprovalRuleTemplateFromRepositoryRequestPrivate(const DisassociateApprovalRuleTemplateFromRepositoryRequestPrivate &other,
                                   DisassociateApprovalRuleTemplateFromRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateApprovalRuleTemplateFromRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
