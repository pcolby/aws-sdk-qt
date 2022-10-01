// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTCLASSIFIERRESPONSE_P_H
#define QTAWS_DELETEDOCUMENTCLASSIFIERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DeleteDocumentClassifierResponse;

class DeleteDocumentClassifierResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DeleteDocumentClassifierResponsePrivate(DeleteDocumentClassifierResponse * const q);

    void parseDeleteDocumentClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentClassifierResponse)
    Q_DISABLE_COPY(DeleteDocumentClassifierResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
