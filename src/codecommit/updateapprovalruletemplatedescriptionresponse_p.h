// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATEDESCRIPTIONRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateDescriptionResponse;

class UpdateApprovalRuleTemplateDescriptionResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateApprovalRuleTemplateDescriptionResponsePrivate(UpdateApprovalRuleTemplateDescriptionResponse * const q);

    void parseUpdateApprovalRuleTemplateDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateDescriptionResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateDescriptionResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
