// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEROWSREQUEST_P_H
#define QTAWS_BATCHDELETETABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "batchdeletetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchDeleteTableRowsRequest;

class BatchDeleteTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    BatchDeleteTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   BatchDeleteTableRowsRequest * const q);
    BatchDeleteTableRowsRequestPrivate(const BatchDeleteTableRowsRequestPrivate &other,
                                   BatchDeleteTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
