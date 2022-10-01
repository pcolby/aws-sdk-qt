// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYRESPONSE_H
#define QTAWS_DISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORYRESPONSE_H

#include "codecommitresponse.h"
#include "disassociateapprovalruletemplatefromrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class DisassociateApprovalRuleTemplateFromRepositoryResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DisassociateApprovalRuleTemplateFromRepositoryResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DisassociateApprovalRuleTemplateFromRepositoryResponse(const DisassociateApprovalRuleTemplateFromRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateApprovalRuleTemplateFromRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApprovalRuleTemplateFromRepositoryResponse)
    Q_DISABLE_COPY(DisassociateApprovalRuleTemplateFromRepositoryResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
