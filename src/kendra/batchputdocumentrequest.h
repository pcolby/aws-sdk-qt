// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTDOCUMENTREQUEST_H
#define QTAWS_BATCHPUTDOCUMENTREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class BatchPutDocumentRequestPrivate;

class QTAWSKENDRA_EXPORT BatchPutDocumentRequest : public KendraRequest {

public:
    BatchPutDocumentRequest(const BatchPutDocumentRequest &other);
    BatchPutDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutDocumentRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
