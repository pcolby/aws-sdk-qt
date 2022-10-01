// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELEDGERREQUEST_P_H
#define QTAWS_DESCRIBELEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "describeledgerrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeLedgerRequest;

class DescribeLedgerRequestPrivate : public QldbRequestPrivate {

public:
    DescribeLedgerRequestPrivate(const QldbRequest::Action action,
                                   DescribeLedgerRequest * const q);
    DescribeLedgerRequestPrivate(const DescribeLedgerRequestPrivate &other,
                                   DescribeLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
