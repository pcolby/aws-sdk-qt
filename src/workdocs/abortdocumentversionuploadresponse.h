// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTDOCUMENTVERSIONUPLOADRESPONSE_H
#define QTAWS_ABORTDOCUMENTVERSIONUPLOADRESPONSE_H

#include "workdocsresponse.h"
#include "abortdocumentversionuploadrequest.h"

namespace QtAws {
namespace WorkDocs {

class AbortDocumentVersionUploadResponsePrivate;

class QTAWSWORKDOCS_EXPORT AbortDocumentVersionUploadResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    AbortDocumentVersionUploadResponse(const AbortDocumentVersionUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AbortDocumentVersionUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortDocumentVersionUploadResponse)
    Q_DISABLE_COPY(AbortDocumentVersionUploadResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
