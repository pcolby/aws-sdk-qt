// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREACTIONSRESPONSE_P_H
#define QTAWS_GETCOMMENTREACTIONSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentReactionsResponse;

class GetCommentReactionsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetCommentReactionsResponsePrivate(GetCommentReactionsResponse * const q);

    void parseGetCommentReactionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommentReactionsResponse)
    Q_DISABLE_COPY(GetCommentReactionsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
