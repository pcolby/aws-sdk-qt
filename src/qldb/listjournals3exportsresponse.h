// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSRESPONSE_H
#define QTAWS_LISTJOURNALS3EXPORTSRESPONSE_H

#include "qldbresponse.h"
#include "listjournals3exportsrequest.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsResponsePrivate;

class QTAWSQLDB_EXPORT ListJournalS3ExportsResponse : public QldbResponse {
    Q_OBJECT

public:
    ListJournalS3ExportsResponse(const ListJournalS3ExportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJournalS3ExportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJournalS3ExportsResponse)
    Q_DISABLE_COPY(ListJournalS3ExportsResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
