// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDOCUMENTSTATUSRESPONSE_H
#define QTAWS_BATCHGETDOCUMENTSTATUSRESPONSE_H

#include "kendraresponse.h"
#include "batchgetdocumentstatusrequest.h"

namespace QtAws {
namespace Kendra {

class BatchGetDocumentStatusResponsePrivate;

class QTAWSKENDRA_EXPORT BatchGetDocumentStatusResponse : public KendraResponse {
    Q_OBJECT

public:
    BatchGetDocumentStatusResponse(const BatchGetDocumentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDocumentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDocumentStatusResponse)
    Q_DISABLE_COPY(BatchGetDocumentStatusResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
