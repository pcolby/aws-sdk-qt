// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCOMMENTFORCOMPAREDCOMMITRESPONSE_P_H
#define QTAWS_POSTCOMMENTFORCOMPAREDCOMMITRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PostCommentForComparedCommitResponse;

class PostCommentForComparedCommitResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PostCommentForComparedCommitResponsePrivate(PostCommentForComparedCommitResponse * const q);

    void parsePostCommentForComparedCommitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostCommentForComparedCommitResponse)
    Q_DISABLE_COPY(PostCommentForComparedCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
