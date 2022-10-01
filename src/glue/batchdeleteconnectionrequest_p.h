// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECONNECTIONREQUEST_P_H
#define QTAWS_BATCHDELETECONNECTIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchdeleteconnectionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteConnectionRequest;

class BatchDeleteConnectionRequestPrivate : public GlueRequestPrivate {

public:
    BatchDeleteConnectionRequestPrivate(const GlueRequest::Action action,
                                   BatchDeleteConnectionRequest * const q);
    BatchDeleteConnectionRequestPrivate(const BatchDeleteConnectionRequestPrivate &other,
                                   BatchDeleteConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteConnectionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
