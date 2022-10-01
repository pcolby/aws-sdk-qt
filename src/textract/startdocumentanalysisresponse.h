// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTANALYSISRESPONSE_H
#define QTAWS_STARTDOCUMENTANALYSISRESPONSE_H

#include "textractresponse.h"
#include "startdocumentanalysisrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentAnalysisResponsePrivate;

class QTAWSTEXTRACT_EXPORT StartDocumentAnalysisResponse : public TextractResponse {
    Q_OBJECT

public:
    StartDocumentAnalysisResponse(const StartDocumentAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDocumentAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentAnalysisResponse)
    Q_DISABLE_COPY(StartDocumentAnalysisResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
