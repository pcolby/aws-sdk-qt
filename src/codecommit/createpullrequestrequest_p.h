// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTREQUEST_P_H
#define QTAWS_CREATEPULLREQUESTREQUEST_P_H

#include "codecommitrequest_p.h"
#include "createpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestRequest;

class CreatePullRequestRequestPrivate : public CodeCommitRequestPrivate {

public:
    CreatePullRequestRequestPrivate(const CodeCommitRequest::Action action,
                                   CreatePullRequestRequest * const q);
    CreatePullRequestRequestPrivate(const CreatePullRequestRequestPrivate &other,
                                   CreatePullRequestRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
