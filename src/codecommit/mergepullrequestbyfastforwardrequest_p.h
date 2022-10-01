// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYFASTFORWARDREQUEST_P_H
#define QTAWS_MERGEPULLREQUESTBYFASTFORWARDREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergepullrequestbyfastforwardrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByFastForwardRequest;

class MergePullRequestByFastForwardRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergePullRequestByFastForwardRequestPrivate(const CodeCommitRequest::Action action,
                                   MergePullRequestByFastForwardRequest * const q);
    MergePullRequestByFastForwardRequestPrivate(const MergePullRequestByFastForwardRequestPrivate &other,
                                   MergePullRequestByFastForwardRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergePullRequestByFastForwardRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
