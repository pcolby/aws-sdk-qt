// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATETABLEROWSREQUEST_P_H
#define QTAWS_BATCHCREATETABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "batchcreatetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchCreateTableRowsRequest;

class BatchCreateTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    BatchCreateTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   BatchCreateTableRowsRequest * const q);
    BatchCreateTableRowsRequestPrivate(const BatchCreateTableRowsRequestPrivate &other,
                                   BatchCreateTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
