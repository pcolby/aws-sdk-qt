// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLASSIFYDOCUMENTRESPONSE_P_H
#define QTAWS_CLASSIFYDOCUMENTRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ClassifyDocumentResponse;

class ClassifyDocumentResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ClassifyDocumentResponsePrivate(ClassifyDocumentResponse * const q);

    void parseClassifyDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClassifyDocumentResponse)
    Q_DISABLE_COPY(ClassifyDocumentResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
