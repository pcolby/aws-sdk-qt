// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESREQUEST_H
#define QTAWS_BATCHDISASSOCIATEAPPROVALRULETEMPLATEFROMREPOSITORIESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchDisassociateApprovalRuleTemplateFromRepositoriesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest : public CodeCommitRequest {

public:
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest(const BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest &other);
    BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateApprovalRuleTemplateFromRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
