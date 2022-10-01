// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNALS3EXPORTSRESPONSE_P_H
#define QTAWS_LISTJOURNALS3EXPORTSRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class ListJournalS3ExportsResponse;

class ListJournalS3ExportsResponsePrivate : public QldbResponsePrivate {

public:

    explicit ListJournalS3ExportsResponsePrivate(ListJournalS3ExportsResponse * const q);

    void parseListJournalS3ExportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJournalS3ExportsResponse)
    Q_DISABLE_COPY(ListJournalS3ExportsResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
