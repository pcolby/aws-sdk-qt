// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSFORLEDGERREQUEST_P_H
#define QTAWS_LISTJOURNALS3EXPORTSFORLEDGERREQUEST_P_H

#include "qldbrequest_p.h"
#include "listjournals3exportsforledgerrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsForLedgerRequest;

class ListJournalS3ExportsForLedgerRequestPrivate : public QldbRequestPrivate {

public:
    ListJournalS3ExportsForLedgerRequestPrivate(const QldbRequest::Action action,
                                   ListJournalS3ExportsForLedgerRequest * const q);
    ListJournalS3ExportsForLedgerRequestPrivate(const ListJournalS3ExportsForLedgerRequestPrivate &other,
                                   ListJournalS3ExportsForLedgerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJournalS3ExportsForLedgerRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
