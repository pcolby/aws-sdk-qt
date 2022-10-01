// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETSTREAMKEYREQUEST_P_H
#define QTAWS_BATCHGETSTREAMKEYREQUEST_P_H

#include "ivsrequest_p.h"
#include "batchgetstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class BatchGetStreamKeyRequest;

class BatchGetStreamKeyRequestPrivate : public IvsRequestPrivate {

public:
    BatchGetStreamKeyRequestPrivate(const IvsRequest::Action action,
                                   BatchGetStreamKeyRequest * const q);
    BatchGetStreamKeyRequestPrivate(const BatchGetStreamKeyRequestPrivate &other,
                                   BatchGetStreamKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
