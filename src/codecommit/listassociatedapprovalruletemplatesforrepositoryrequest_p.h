// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYREQUEST_P_H
#define QTAWS_LISTASSOCIATEDAPPROVALRULETEMPLATESFORREPOSITORYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listassociatedapprovalruletemplatesforrepositoryrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListAssociatedApprovalRuleTemplatesForRepositoryRequest;

class ListAssociatedApprovalRuleTemplatesForRepositoryRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListAssociatedApprovalRuleTemplatesForRepositoryRequestPrivate(const CodeCommitRequest::Action action,
                                   ListAssociatedApprovalRuleTemplatesForRepositoryRequest * const q);
    ListAssociatedApprovalRuleTemplatesForRepositoryRequestPrivate(const ListAssociatedApprovalRuleTemplatesForRepositoryRequestPrivate &other,
                                   ListAssociatedApprovalRuleTemplatesForRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedApprovalRuleTemplatesForRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
