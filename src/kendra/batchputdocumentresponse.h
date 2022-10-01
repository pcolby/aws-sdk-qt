// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTDOCUMENTRESPONSE_H
#define QTAWS_BATCHPUTDOCUMENTRESPONSE_H

#include "kendraresponse.h"
#include "batchputdocumentrequest.h"

namespace QtAws {
namespace Kendra {

class BatchPutDocumentResponsePrivate;

class QTAWSKENDRA_EXPORT BatchPutDocumentResponse : public KendraResponse {
    Q_OBJECT

public:
    BatchPutDocumentResponse(const BatchPutDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutDocumentResponse)
    Q_DISABLE_COPY(BatchPutDocumentResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
