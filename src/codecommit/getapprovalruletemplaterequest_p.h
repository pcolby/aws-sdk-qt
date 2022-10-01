// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPROVALRULETEMPLATEREQUEST_P_H
#define QTAWS_GETAPPROVALRULETEMPLATEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "getapprovalruletemplaterequest.h"

namespace QtAws {
namespace CodeCommit {

class GetApprovalRuleTemplateRequest;

class GetApprovalRuleTemplateRequestPrivate : public CodeCommitRequestPrivate {

public:
    GetApprovalRuleTemplateRequestPrivate(const CodeCommitRequest::Action action,
                                   GetApprovalRuleTemplateRequest * const q);
    GetApprovalRuleTemplateRequestPrivate(const GetApprovalRuleTemplateRequestPrivate &other,
                                   GetApprovalRuleTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApprovalRuleTemplateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
