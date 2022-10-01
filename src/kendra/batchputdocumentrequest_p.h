// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTDOCUMENTREQUEST_P_H
#define QTAWS_BATCHPUTDOCUMENTREQUEST_P_H

#include "kendrarequest_p.h"
#include "batchputdocumentrequest.h"

namespace QtAws {
namespace Kendra {

class BatchPutDocumentRequest;

class BatchPutDocumentRequestPrivate : public KendraRequestPrivate {

public:
    BatchPutDocumentRequestPrivate(const KendraRequest::Action action,
                                   BatchPutDocumentRequest * const q);
    BatchPutDocumentRequestPrivate(const BatchPutDocumentRequestPrivate &other,
                                   BatchPutDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutDocumentRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
