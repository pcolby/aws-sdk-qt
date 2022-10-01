// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTTEXTDETECTIONRESPONSE_H
#define QTAWS_GETDOCUMENTTEXTDETECTIONRESPONSE_H

#include "textractresponse.h"
#include "getdocumenttextdetectionrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentTextDetectionResponsePrivate;

class QTAWSTEXTRACT_EXPORT GetDocumentTextDetectionResponse : public TextractResponse {
    Q_OBJECT

public:
    GetDocumentTextDetectionResponse(const GetDocumentTextDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentTextDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentTextDetectionResponse)
    Q_DISABLE_COPY(GetDocumentTextDetectionResponse)

};

} // namespace Textract
} // namespace QtAws

#endif
