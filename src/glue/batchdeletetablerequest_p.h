// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEREQUEST_P_H
#define QTAWS_BATCHDELETETABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "batchdeletetablerequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableRequest;

class BatchDeleteTableRequestPrivate : public GlueRequestPrivate {

public:
    BatchDeleteTableRequestPrivate(const GlueRequest::Action action,
                                   BatchDeleteTableRequest * const q);
    BatchDeleteTableRequestPrivate(const BatchDeleteTableRequestPrivate &other,
                                   BatchDeleteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
