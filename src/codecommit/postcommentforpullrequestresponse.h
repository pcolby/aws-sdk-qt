// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORPULLREQUESTRESPONSE_H
#define QTAWS_POSTCOMMENTFORPULLREQUESTRESPONSE_H

#include "codecommitresponse.h"
#include "postcommentforpullrequestrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForPullRequestResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentForPullRequestResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PostCommentForPullRequestResponse(const PostCommentForPullRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostCommentForPullRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentForPullRequestResponse)
    Q_DISABLE_COPY(PostCommentForPullRequestResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
