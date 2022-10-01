// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATENAMEREQUEST_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATENAMEREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updateapprovalruletemplatenamerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateNameRequest;

class UpdateApprovalRuleTemplateNameRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateApprovalRuleTemplateNameRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateApprovalRuleTemplateNameRequest * const q);
    UpdateApprovalRuleTemplateNameRequestPrivate(const UpdateApprovalRuleTemplateNameRequestPrivate &other,
                                   UpdateApprovalRuleTemplateNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateNameRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
