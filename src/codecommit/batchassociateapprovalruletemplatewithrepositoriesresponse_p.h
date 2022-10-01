// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESRESPONSE_P_H
#define QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class BatchAssociateApprovalRuleTemplateWithRepositoriesResponse;

class BatchAssociateApprovalRuleTemplateWithRepositoriesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit BatchAssociateApprovalRuleTemplateWithRepositoriesResponsePrivate(BatchAssociateApprovalRuleTemplateWithRepositoriesResponse * const q);

    void parseBatchAssociateApprovalRuleTemplateWithRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateApprovalRuleTemplateWithRepositoriesResponse)
    Q_DISABLE_COPY(BatchAssociateApprovalRuleTemplateWithRepositoriesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
