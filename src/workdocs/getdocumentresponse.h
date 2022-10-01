// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTRESPONSE_H
#define QTAWS_GETDOCUMENTRESPONSE_H

#include "workdocsresponse.h"
#include "getdocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetDocumentResponse(const GetDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentResponse)
    Q_DISABLE_COPY(GetDocumentResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
