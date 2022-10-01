// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESRESPONSE_H
#define QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESRESPONSE_H

#include "codecommitresponse.h"
#include "batchdisassociateapprovalruletemplatefromrepositoriesrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDisassociateApprovalRuleTemplateFromRepositoriesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse)
    Q_DISABLE_COPY(BatchDisassociateApprovalRuleTemplateFromRepositoriesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
