// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDOCUMENTREQUEST_P_H
#define QTAWS_BATCHDELETEDOCUMENTREQUEST_P_H

#include "kendrarequest_p.h"
#include "batchdeletedocumentrequest.h"

namespace QtAws {
namespace Kendra {

class BatchDeleteDocumentRequest;

class BatchDeleteDocumentRequestPrivate : public KendraRequestPrivate {

public:
    BatchDeleteDocumentRequestPrivate(const KendraRequest::Action action,
                                   BatchDeleteDocumentRequest * const q);
    BatchDeleteDocumentRequestPrivate(const BatchDeleteDocumentRequestPrivate &other,
                                   BatchDeleteDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDocumentRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
