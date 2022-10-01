// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDOCUMENTSTATUSREQUEST_H
#define QTAWS_BATCHGETDOCUMENTSTATUSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class BatchGetDocumentStatusRequestPrivate;

class QTAWSKENDRA_EXPORT BatchGetDocumentStatusRequest : public KendraRequest {

public:
    BatchGetDocumentStatusRequest(const BatchGetDocumentStatusRequest &other);
    BatchGetDocumentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDocumentStatusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
