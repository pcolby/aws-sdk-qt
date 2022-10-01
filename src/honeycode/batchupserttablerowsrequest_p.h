// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPSERTTABLEROWSREQUEST_P_H
#define QTAWS_BATCHUPSERTTABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "batchupserttablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpsertTableRowsRequest;

class BatchUpsertTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    BatchUpsertTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   BatchUpsertTableRowsRequest * const q);
    BatchUpsertTableRowsRequestPrivate(const BatchUpsertTableRowsRequestPrivate &other,
                                   BatchUpsertTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpsertTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
