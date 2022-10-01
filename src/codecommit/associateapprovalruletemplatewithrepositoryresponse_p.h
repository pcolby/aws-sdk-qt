// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYRESPONSE_P_H
#define QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class AssociateApprovalRuleTemplateWithRepositoryResponse;

class AssociateApprovalRuleTemplateWithRepositoryResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit AssociateApprovalRuleTemplateWithRepositoryResponsePrivate(AssociateApprovalRuleTemplateWithRepositoryResponse * const q);

    void parseAssociateApprovalRuleTemplateWithRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateApprovalRuleTemplateWithRepositoryResponse)
    Q_DISABLE_COPY(AssociateApprovalRuleTemplateWithRepositoryResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
