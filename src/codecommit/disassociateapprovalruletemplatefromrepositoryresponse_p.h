// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYRESPONSE_P_H
#define QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DisassociateApprovalRuleTemplateFromRepositoryResponse;

class DisassociateApprovalRuleTemplateFromRepositoryResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DisassociateApprovalRuleTemplateFromRepositoryResponsePrivate(DisassociateApprovalRuleTemplateFromRepositoryResponse * const q);

    void parseDisassociateApprovalRuleTemplateFromRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateApprovalRuleTemplateFromRepositoryResponse)
    Q_DISABLE_COPY(DisassociateApprovalRuleTemplateFromRepositoryResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
