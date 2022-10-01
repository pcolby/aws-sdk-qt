// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSFORLEDGERRESPONSE_P_H
#define QTAWS_LISTJOURNALS3EXPORTSFORLEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsForLedgerResponse;

class ListJournalS3ExportsForLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit ListJournalS3ExportsForLedgerResponsePrivate(ListJournalS3ExportsForLedgerResponse * const q);

    void parseListJournalS3ExportsForLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJournalS3ExportsForLedgerResponse)
    Q_DISABLE_COPY(ListJournalS3ExportsForLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
