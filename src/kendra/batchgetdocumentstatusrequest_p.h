// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDOCUMENTSTATUSREQUEST_P_H
#define QTAWS_BATCHGETDOCUMENTSTATUSREQUEST_P_H

#include "kendrarequest_p.h"
#include "batchgetdocumentstatusrequest.h"

namespace QtAws {
namespace Kendra {

class BatchGetDocumentStatusRequest;

class BatchGetDocumentStatusRequestPrivate : public KendraRequestPrivate {

public:
    BatchGetDocumentStatusRequestPrivate(const KendraRequest::Action action,
                                   BatchGetDocumentStatusRequest * const q);
    BatchGetDocumentStatusRequestPrivate(const BatchGetDocumentStatusRequestPrivate &other,
                                   BatchGetDocumentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDocumentStatusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
