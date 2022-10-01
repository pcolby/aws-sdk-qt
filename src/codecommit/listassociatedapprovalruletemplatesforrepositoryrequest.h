// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYREQUEST_H
#define QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListAssociatedApprovalRuleTemplatesForRepositoryRequestPrivate;

class QTAWSCODECOMMIT_EXPORT ListAssociatedApprovalRuleTemplatesForRepositoryRequest : public CodeCommitRequest {

public:
    ListAssociatedApprovalRuleTemplatesForRepositoryRequest(const ListAssociatedApprovalRuleTemplatesForRepositoryRequest &other);
    ListAssociatedApprovalRuleTemplatesForRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedApprovalRuleTemplatesForRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
