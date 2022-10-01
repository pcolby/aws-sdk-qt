// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEDOCUMENTRESPONSE_H
#define QTAWS_ANALYZEDOCUMENTRESPONSE_H

#include "textractresponse.h"
#include "analyzedocumentrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeDocumentResponsePrivate;

class QTAWSTEXTRACT_EXPORT AnalyzeDocumentResponse : public TextractResponse {
    Q_OBJECT

public:
    AnalyzeDocumentResponse(const AnalyzeDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AnalyzeDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AnalyzeDocumentResponse)
    Q_DISABLE_COPY(AnalyzeDocumentResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
