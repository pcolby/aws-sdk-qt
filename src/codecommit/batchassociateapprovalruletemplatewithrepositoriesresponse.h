// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESRESPONSE_H
#define QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESRESPONSE_H

#include "codecommitresponse.h"
#include "batchassociateapprovalruletemplatewithrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchAssociateApprovalRuleTemplateWithRepositoriesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT BatchAssociateApprovalRuleTemplateWithRepositoriesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    BatchAssociateApprovalRuleTemplateWithRepositoriesResponse(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateApprovalRuleTemplateWithRepositoriesResponse)
    Q_DISABLE_COPY(BatchAssociateApprovalRuleTemplateWithRepositoriesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
