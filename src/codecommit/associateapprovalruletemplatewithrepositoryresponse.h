// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYRESPONSE_H
#define QTAWS_ASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORYRESPONSE_H

#include "codecommitresponse.h"
#include "associateapprovalruletemplatewithrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class AssociateApprovalRuleTemplateWithRepositoryResponsePrivate;

class QTAWSCODECOMMIT_EXPORT AssociateApprovalRuleTemplateWithRepositoryResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    AssociateApprovalRuleTemplateWithRepositoryResponse(const AssociateApprovalRuleTemplateWithRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateApprovalRuleTemplateWithRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApprovalRuleTemplateWithRepositoryResponse)
    Q_DISABLE_COPY(AssociateApprovalRuleTemplateWithRepositoryResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
