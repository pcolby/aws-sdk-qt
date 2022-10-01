// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOCUMENTTEXTRESPONSE_H
#define QTAWS_DETECTDOCUMENTTEXTRESPONSE_H

#include "textractresponse.h"
#include "detectdocumenttextrequest.h"

namespace QtAws {
namespace Textract {

class DetectDocumentTextResponsePrivate;

class QTAWSTEXTRACT_EXPORT DetectDocumentTextResponse : public TextractResponse {
    Q_OBJECT

public:
    DetectDocumentTextResponse(const DetectDocumentTextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectDocumentTextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectDocumentTextResponse)
    Q_DISABLE_COPY(DetectDocumentTextResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
