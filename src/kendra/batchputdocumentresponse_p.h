// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTDOCUMENTRESPONSE_P_H
#define QTAWS_BATCHPUTDOCUMENTRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class BatchPutDocumentResponse;

class BatchPutDocumentResponsePrivate : public KendraResponsePrivate {

public:

    explicit BatchPutDocumentResponsePrivate(BatchPutDocumentResponse * const q);

    void parseBatchPutDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutDocumentResponse)
    Q_DISABLE_COPY(BatchPutDocumentResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
