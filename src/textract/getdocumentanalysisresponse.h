// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTANALYSISRESPONSE_H
#define QTAWS_GETDOCUMENTANALYSISRESPONSE_H

#include "textractresponse.h"
#include "getdocumentanalysisrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentAnalysisResponsePrivate;

class QTAWSTEXTRACT_EXPORT GetDocumentAnalysisResponse : public TextractResponse {
    Q_OBJECT

public:
    GetDocumentAnalysisResponse(const GetDocumentAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentAnalysisResponse)
    Q_DISABLE_COPY(GetDocumentAnalysisResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
