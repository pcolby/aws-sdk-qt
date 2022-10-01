// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTREQUEST_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updateapprovalruletemplatecontentrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateContentRequest;

class UpdateApprovalRuleTemplateContentRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdateApprovalRuleTemplateContentRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdateApprovalRuleTemplateContentRequest * const q);
    UpdateApprovalRuleTemplateContentRequestPrivate(const UpdateApprovalRuleTemplateContentRequestPrivate &other,
                                   UpdateApprovalRuleTemplateContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
