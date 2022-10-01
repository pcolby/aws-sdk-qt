// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBREQUEST_P_H
#define QTAWS_CANCELJOBREQUEST_P_H

#include "batchrequest_p.h"
#include "canceljobrequest.h"

namespace QtAws {
namespace Batch {

class CancelJobRequest;

class CancelJobRequestPrivate : public BatchRequestPrivate {

public:
    CancelJobRequestPrivate(const BatchRequest::Action action,
                                   CancelJobRequest * const q);
    CancelJobRequestPrivate(const CancelJobRequestPrivate &other,
                                   CancelJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelJobRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
