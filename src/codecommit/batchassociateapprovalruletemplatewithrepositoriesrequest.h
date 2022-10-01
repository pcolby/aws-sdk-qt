// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESREQUEST_H
#define QTAWS_BATCHASSOCIATEAPPROVALRULETEMPLATEWITHREPOSITORIESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class BatchAssociateApprovalRuleTemplateWithRepositoriesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT BatchAssociateApprovalRuleTemplateWithRepositoriesRequest : public CodeCommitRequest {

public:
    BatchAssociateApprovalRuleTemplateWithRepositoriesRequest(const BatchAssociateApprovalRuleTemplateWithRepositoriesRequest &other);
    BatchAssociateApprovalRuleTemplateWithRepositoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateApprovalRuleTemplateWithRepositoriesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
