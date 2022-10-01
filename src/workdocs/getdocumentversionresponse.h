// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTVERSIONRESPONSE_H
#define QTAWS_GETDOCUMENTVERSIONRESPONSE_H

#include "workdocsresponse.h"
#include "getdocumentversionrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentVersionResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentVersionResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetDocumentVersionResponse(const GetDocumentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentVersionResponse)
    Q_DISABLE_COPY(GetDocumentVersionResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
