// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORPULLREQUESTRESPONSE_P_H
#define QTAWS_POSTCOMMENTFORPULLREQUESTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForPullRequestResponse;

class PostCommentForPullRequestResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PostCommentForPullRequestResponsePrivate(PostCommentForPullRequestResponse * const q);

    void parsePostCommentForPullRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostCommentForPullRequestResponse)
    Q_DISABLE_COPY(PostCommentForPullRequestResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
