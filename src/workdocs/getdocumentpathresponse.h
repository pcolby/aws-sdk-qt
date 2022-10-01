// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTPATHRESPONSE_H
#define QTAWS_GETDOCUMENTPATHRESPONSE_H

#include "workdocsresponse.h"
#include "getdocumentpathrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetDocumentPathResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetDocumentPathResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetDocumentPathResponse(const GetDocumentPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentPathResponse)
    Q_DISABLE_COPY(GetDocumentPathResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
