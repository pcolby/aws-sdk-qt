// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTTEXTDETECTIONRESPONSE_H
#define QTAWS_STARTDOCUMENTTEXTDETECTIONRESPONSE_H

#include "textractresponse.h"
#include "startdocumenttextdetectionrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentTextDetectionResponsePrivate;

class QTAWSTEXTRACT_EXPORT StartDocumentTextDetectionResponse : public TextractResponse {
    Q_OBJECT

public:
    StartDocumentTextDetectionResponse(const StartDocumentTextDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDocumentTextDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentTextDetectionResponse)
    Q_DISABLE_COPY(StartDocumentTextDetectionResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
