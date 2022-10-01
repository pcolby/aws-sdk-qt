// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPROVALRULETEMPLATERESPONSE_P_H
#define QTAWS_CREATEAPPROVALRULETEMPLATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CreateApprovalRuleTemplateResponse;

class CreateApprovalRuleTemplateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit CreateApprovalRuleTemplateResponsePrivate(CreateApprovalRuleTemplateResponse * const q);

    void parseCreateApprovalRuleTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(CreateApprovalRuleTemplateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
