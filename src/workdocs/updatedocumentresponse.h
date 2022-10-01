// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTRESPONSE_H
#define QTAWS_UPDATEDOCUMENTRESPONSE_H

#include "workdocsresponse.h"
#include "updatedocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentResponsePrivate;

class QTAWSWORKDOCS_EXPORT UpdateDocumentResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    UpdateDocumentResponse(const UpdateDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentResponse)
    Q_DISABLE_COPY(UpdateDocumentResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
