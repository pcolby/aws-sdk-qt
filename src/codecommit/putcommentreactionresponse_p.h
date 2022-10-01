// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMMENTREACTIONRESPONSE_P_H
#define QTAWS_PUTCOMMENTREACTIONRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PutCommentReactionResponse;

class PutCommentReactionResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PutCommentReactionResponsePrivate(PutCommentReactionResponse * const q);

    void parsePutCommentReactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutCommentReactionResponse)
    Q_DISABLE_COPY(PutCommentReactionResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
