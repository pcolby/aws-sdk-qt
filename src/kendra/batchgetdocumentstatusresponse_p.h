// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDOCUMENTSTATUSRESPONSE_P_H
#define QTAWS_BATCHGETDOCUMENTSTATUSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class BatchGetDocumentStatusResponse;

class BatchGetDocumentStatusResponsePrivate : public KendraResponsePrivate {

public:

    explicit BatchGetDocumentStatusResponsePrivate(BatchGetDocumentStatusResponse * const q);

    void parseBatchGetDocumentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDocumentStatusResponse)
    Q_DISABLE_COPY(BatchGetDocumentStatusResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
