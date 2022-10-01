// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSFORLEDGERRESPONSE_H
#define QTAWS_LISTJOURNALS3EXPORTSFORLEDGERRESPONSE_H

#include "qldbresponse.h"
#include "listjournals3exportsforledgerrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsForLedgerResponsePrivate;

class QTAWSQLDB_EXPORT ListJournalS3ExportsForLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    ListJournalS3ExportsForLedgerResponse(const ListJournalS3ExportsForLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJournalS3ExportsForLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalS3ExportsForLedgerResponse)
    Q_DISABLE_COPY(ListJournalS3ExportsForLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
