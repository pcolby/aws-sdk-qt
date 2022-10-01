// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse;

class BatchDisassociateApprovalRuleTemplateFromRepositoriesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit BatchDisassociateApprovalRuleTemplateFromRepositoriesResponsePrivate(BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse * const q);

    void parseBatchDisassociateApprovalRuleTemplateFromRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse)
    Q_DISABLE_COPY(BatchDisassociateApprovalRuleTemplateFromRepositoriesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
