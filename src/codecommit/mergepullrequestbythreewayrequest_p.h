// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYTHREEWAYREQUEST_P_H
#define QTAWS_MERGEPULLREQUESTBYTHREEWAYREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergepullrequestbythreewayrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByThreeWayRequest;

class MergePullRequestByThreeWayRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergePullRequestByThreeWayRequestPrivate(const CodeCommitRequest::Action action,
                                   MergePullRequestByThreeWayRequest * const q);
    MergePullRequestByThreeWayRequestPrivate(const MergePullRequestByThreeWayRequestPrivate &other,
                                   MergePullRequestByThreeWayRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergePullRequestByThreeWayRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
