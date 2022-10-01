// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPROVALRULETEMPLATENAMERESPONSE_P_H
#define QTAWS_UPDATEAPPROVALRULETEMPLATENAMERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateApprovalRuleTemplateNameResponse;

class UpdateApprovalRuleTemplateNameResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateApprovalRuleTemplateNameResponsePrivate(UpdateApprovalRuleTemplateNameResponse * const q);

    void parseUpdateApprovalRuleTemplateNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApprovalRuleTemplateNameResponse)
    Q_DISABLE_COPY(UpdateApprovalRuleTemplateNameResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
