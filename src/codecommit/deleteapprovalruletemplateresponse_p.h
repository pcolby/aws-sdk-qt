// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPROVALRULETEMPLATERESPONSE_P_H
#define QTAWS_DELETEAPPROVALRULETEMPLATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DeleteApprovalRuleTemplateResponse;

class DeleteApprovalRuleTemplateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DeleteApprovalRuleTemplateResponsePrivate(DeleteApprovalRuleTemplateResponse * const q);

    void parseDeleteApprovalRuleTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(DeleteApprovalRuleTemplateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
