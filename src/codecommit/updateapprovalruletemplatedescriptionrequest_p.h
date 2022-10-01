// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updateapprovalruletemplatedescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateDescriptionRequest;

class UpdateApprovalRuleTemplateDescriptionRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateApprovalRuleTemplateDescriptionRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateApprovalRuleTemplateDescriptionRequest * const q);
    UpdateApprovalRuleTemplateDescriptionRequestPrivate(const UpdateApprovalRuleTemplateDescriptionRequestPrivate &other,
                                   UpdateApprovalRuleTemplateDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
