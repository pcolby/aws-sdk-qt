// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTREPLYRESPONSE_H
#define QTAWS_POSTCOMMENTREPLYRESPONSE_H

#include "codecommitresponse.h"
#include "postcommentreplyrequest.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentReplyResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PostCommentReplyResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PostCommentReplyResponse(const PostCommentReplyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostCommentReplyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostCommentReplyResponse)
    Q_DISABLE_COPY(PostCommentReplyResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
