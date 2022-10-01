// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPROVALRULETEMPLATEREQUEST_P_H
#define QTAWS_CREATEAPPROVALRULETEMPLATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateApprovalRuleTemplateRequest;

class CreateApprovalRuleTemplateRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreateApprovalRuleTemplateRequestPrivate(const CodeCommitRequest::Action action,
                                   CreateApprovalRuleTemplateRequest * const q);
    CreateApprovalRuleTemplateRequestPrivate(const CreateApprovalRuleTemplateRequestPrivate &other,
                                   CreateApprovalRuleTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
