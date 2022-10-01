// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTDOCUMENTVERSIONUPLOADRESPONSE_P_H
#define QTAWS_ABORTDOCUMENTVERSIONUPLOADRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class AbortDocumentVersionUploadResponse;

class AbortDocumentVersionUploadResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit AbortDocumentVersionUploadResponsePrivate(AbortDocumentVersionUploadResponse * const q);

    void parseAbortDocumentVersionUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AbortDocumentVersionUploadResponse)
    Q_DISABLE_COPY(AbortDocumentVersionUploadResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
