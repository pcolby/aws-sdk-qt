// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVALRULETEMPLATESREQUEST_P_H
#define QTAWS_LISTAPPROVALRULETEMPLATESREQUEST_P_H

#include "codecommitrequest_p.h"
#include "listapprovalruletemplatesrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListApprovalRuleTemplatesRequest;

class ListApprovalRuleTemplatesRequestPrivate : public CodeCommitRequestPrivate {

public:
    ListApprovalRuleTemplatesRequestPrivate(const CodeCommitRequest::Action action,
                                   ListApprovalRuleTemplatesRequest * const q);
    ListApprovalRuleTemplatesRequestPrivate(const ListApprovalRuleTemplatesRequestPrivate &other,
                                   ListApprovalRuleTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApprovalRuleTemplatesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
