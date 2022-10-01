// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERREQUEST_P_H
#define QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "listjournalkinesisstreamsforledgerrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalKinesisStreamsForLedgerRequest;

class ListJournalKinesisStreamsForLedgerRequestPrivate : public QldbRequestPrivate {

public:
    ListJournalKinesisStreamsForLedgerRequestPrivate(const QldbRequest::Action action,
                                   ListJournalKinesisStreamsForLedgerRequest * const q);
    ListJournalKinesisStreamsForLedgerRequestPrivate(const ListJournalKinesisStreamsForLedgerRequestPrivate &other,
                                   ListJournalKinesisStreamsForLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJournalKinesisStreamsForLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
