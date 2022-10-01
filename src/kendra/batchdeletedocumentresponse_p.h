// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDOCUMENTRESPONSE_P_H
#define QTAWS_BATCHDELETEDOCUMENTRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class BatchDeleteDocumentResponse;

class BatchDeleteDocumentResponsePrivate : public KendraResponsePrivate {

public:

    explicit BatchDeleteDocumentResponsePrivate(BatchDeleteDocumentResponse * const q);

    void parseBatchDeleteDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDocumentResponse)
    Q_DISABLE_COPY(BatchDeleteDocumentResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
