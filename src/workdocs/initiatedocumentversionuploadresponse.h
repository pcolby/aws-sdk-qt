// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDOCUMENTVERSIONUPLOADRESPONSE_H
#define QTAWS_INITIATEDOCUMENTVERSIONUPLOADRESPONSE_H

#include "workdocsresponse.h"
#include "initiatedocumentversionuploadrequest.h"

namespace QtAws {
namespace WorkDocs {

class InitiateDocumentVersionUploadResponsePrivate;

class QTAWSWORKDOCS_EXPORT InitiateDocumentVersionUploadResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    InitiateDocumentVersionUploadResponse(const InitiateDocumentVersionUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateDocumentVersionUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateDocumentVersionUploadResponse)
    Q_DISABLE_COPY(InitiateDocumentVersionUploadResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
