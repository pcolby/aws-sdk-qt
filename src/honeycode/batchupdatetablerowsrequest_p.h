// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATETABLEROWSREQUEST_P_H
#define QTAWS_BATCHUPDATETABLEROWSREQUEST_P_H

#include "honeycoderequest_p.h"
#include "batchupdatetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpdateTableRowsRequest;

class BatchUpdateTableRowsRequestPrivate : public HoneycodeRequestPrivate {

public:
    BatchUpdateTableRowsRequestPrivate(const HoneycodeRequest::Action action,
                                   BatchUpdateTableRowsRequest * const q);
    BatchUpdateTableRowsRequestPrivate(const BatchUpdateTableRowsRequestPrivate &other,
                                   BatchUpdateTableRowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
