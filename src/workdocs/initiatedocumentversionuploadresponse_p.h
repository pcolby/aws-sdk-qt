// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDOCUMENTVERSIONUPLOADRESPONSE_P_H
#define QTAWS_INITIATEDOCUMENTVERSIONUPLOADRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class InitiateDocumentVersionUploadResponse;

class InitiateDocumentVersionUploadResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit InitiateDocumentVersionUploadResponsePrivate(InitiateDocumentVersionUploadResponse * const q);

    void parseInitiateDocumentVersionUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateDocumentVersionUploadResponse)
    Q_DISABLE_COPY(InitiateDocumentVersionUploadResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
