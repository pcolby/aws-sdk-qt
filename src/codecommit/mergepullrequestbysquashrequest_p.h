// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_P_H
#define QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergepullrequestbysquashrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestBySquashRequest;

class MergePullRequestBySquashRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergePullRequestBySquashRequestPrivate(const CodeCommitRequest::Action action,
                                   MergePullRequestBySquashRequest * const q);
    MergePullRequestBySquashRequestPrivate(const MergePullRequestBySquashRequestPrivate &other,
                                   MergePullRequestBySquashRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergePullRequestBySquashRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
