// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTRESPONSE_P_H
#define QTAWS_DELETECOMMENTRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCommentResponse;

class DeleteCommentResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteCommentResponsePrivate(DeleteCommentResponse * const q);

    void parseDeleteCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCommentResponse)
    Q_DISABLE_COPY(DeleteCommentResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
