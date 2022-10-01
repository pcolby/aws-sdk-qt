// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTRESPONSE_P_H
#define QTAWS_DELETEDOCUMENTRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteDocumentResponse;

class DeleteDocumentResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteDocumentResponsePrivate(DeleteDocumentResponse * const q);

    void parseDeleteDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentResponse)
    Q_DISABLE_COPY(DeleteDocumentResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
