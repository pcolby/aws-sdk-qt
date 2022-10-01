// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLASSIFYDOCUMENTRESPONSE_H
#define QTAWS_CLASSIFYDOCUMENTRESPONSE_H

#include "comprehendresponse.h"
#include "classifydocumentrequest.h"

namespace QtAws {
namespace Comprehend {

class ClassifyDocumentResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ClassifyDocumentResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ClassifyDocumentResponse(const ClassifyDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClassifyDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClassifyDocumentResponse)
    Q_DISABLE_COPY(ClassifyDocumentResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
