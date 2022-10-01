// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEVERSIONREQUEST_P_H
#define QTAWS_BATCHDELETETABLEVERSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "batchdeletetableversionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableVersionRequest;

class BatchDeleteTableVersionRequestPrivate : public GlueRequestPrivate {

public:
    BatchDeleteTableVersionRequestPrivate(const GlueRequest::Action action,
                                   BatchDeleteTableVersionRequest * const q);
    BatchDeleteTableVersionRequestPrivate(const BatchDeleteTableVersionRequestPrivate &other,
                                   BatchDeleteTableVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
