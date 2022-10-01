// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTREPLYRESPONSE_P_H
#define QTAWS_POSTCOMMENTREPLYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentReplyResponse;

class PostCommentReplyResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PostCommentReplyResponsePrivate(PostCommentReplyResponse * const q);

    void parsePostCommentReplyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostCommentReplyResponse)
    Q_DISABLE_COPY(PostCommentReplyResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
