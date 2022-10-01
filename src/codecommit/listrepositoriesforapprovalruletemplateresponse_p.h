// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATERESPONSE_P_H
#define QTAWS_LISTREPOSITORIESFORAPPROVALRULETEMPLATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class ListRepositoriesForApprovalRuleTemplateResponse;

class ListRepositoriesForApprovalRuleTemplateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit ListRepositoriesForApprovalRuleTemplateResponsePrivate(ListRepositoriesForApprovalRuleTemplateResponse * const q);

    void parseListRepositoriesForApprovalRuleTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRepositoriesForApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(ListRepositoriesForApprovalRuleTemplateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
