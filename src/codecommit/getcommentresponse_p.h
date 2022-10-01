// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTRESPONSE_P_H
#define QTAWS_GETCOMMENTRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentResponse;

class GetCommentResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetCommentResponsePrivate(GetCommentResponse * const q);

    void parseGetCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommentResponse)
    Q_DISABLE_COPY(GetCommentResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
