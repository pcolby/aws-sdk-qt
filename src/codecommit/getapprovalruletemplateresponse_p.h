// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPROVALRULETEMPLATERESPONSE_P_H
#define QTAWS_GETAPPROVALRULETEMPLATERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetApprovalRuleTemplateResponse;

class GetApprovalRuleTemplateResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetApprovalRuleTemplateResponsePrivate(GetApprovalRuleTemplateResponse * const q);

    void parseGetApprovalRuleTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApprovalRuleTemplateResponse)
    Q_DISABLE_COPY(GetApprovalRuleTemplateResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
