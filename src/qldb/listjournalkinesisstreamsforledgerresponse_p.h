// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERRESPONSE_P_H
#define QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class ListJournalKinesisStreamsForLedgerResponse;

class ListJournalKinesisStreamsForLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit ListJournalKinesisStreamsForLedgerResponsePrivate(ListJournalKinesisStreamsForLedgerResponse * const q);

    void parseListJournalKinesisStreamsForLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJournalKinesisStreamsForLedgerResponse)
    Q_DISABLE_COPY(ListJournalKinesisStreamsForLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
