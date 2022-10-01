// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTRESPONSE_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATECONTENTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateContentResponse;

class UpdateApprovalRuleTemplateContentResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateApprovalRuleTemplateContentResponsePrivate(UpdateApprovalRuleTemplateContentResponse * const q);

    void parseUpdateApprovalRuleTemplateContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateContentResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateContentResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
