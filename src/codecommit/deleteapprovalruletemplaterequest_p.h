// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPROVALRULETEMPLATEREQUEST_P_H
#define QTAWS_DELETEAPPROVALRULETEMPLATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "deleteapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteApprovalRuleTemplateRequest;

class DeleteApprovalRuleTemplateRequestPrivate : public CodeCommitRequestPrivate {

public:
    DeleteApprovalRuleTemplateRequestPrivate(const CodeCommitRequest::Action action,
                                   DeleteApprovalRuleTemplateRequest * const q);
    DeleteApprovalRuleTemplateRequestPrivate(const DeleteApprovalRuleTemplateRequestPrivate &other,
                                   DeleteApprovalRuleTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
