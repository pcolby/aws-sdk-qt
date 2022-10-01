// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMENTRESPONSE_P_H
#define QTAWS_CREATECOMMENTRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class CreateCommentResponse;

class CreateCommentResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit CreateCommentResponsePrivate(CreateCommentResponse * const q);

    void parseCreateCommentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCommentResponse)
    Q_DISABLE_COPY(CreateCommentResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
