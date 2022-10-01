// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMMENTRESPONSE_P_H
#define QTAWS_UPDATECOMMENTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateCommentResponse;

class UpdateCommentResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateCommentResponsePrivate(UpdateCommentResponse * const q);

    void parseUpdateCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCommentResponse)
    Q_DISABLE_COPY(UpdateCommentResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
