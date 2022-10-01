// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERRESPONSE_H
#define QTAWS_LISTJOURNALKINESISSTREAMSFORLEDGERRESPONSE_H

#include "qldbresponse.h"
#include "listjournalkinesisstreamsforledgerrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalKinesisStreamsForLedgerResponsePrivate;

class QTAWSQLDB_EXPORT ListJournalKinesisStreamsForLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    ListJournalKinesisStreamsForLedgerResponse(const ListJournalKinesisStreamsForLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJournalKinesisStreamsForLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalKinesisStreamsForLedgerResponse)
    Q_DISABLE_COPY(ListJournalKinesisStreamsForLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
