// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTCLASSIFIERRESPONSE_P_H
#define QTAWS_CREATEDOCUMENTCLASSIFIERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class CreateDocumentClassifierResponse;

class CreateDocumentClassifierResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit CreateDocumentClassifierResponsePrivate(CreateDocumentClassifierResponse * const q);

    void parseCreateDocumentClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDocumentClassifierResponse)
    Q_DISABLE_COPY(CreateDocumentClassifierResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
