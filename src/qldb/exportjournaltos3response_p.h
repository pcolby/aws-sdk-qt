// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTJOURNALTOS3RESPONSE_P_H
#define QTAWS_EXPORTJOURNALTOS3RESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class ExportJournalToS3Response;

class ExportJournalToS3ResponsePrivate : public QldbResponsePrivate {

public:

    explicit ExportJournalToS3ResponsePrivate(ExportJournalToS3Response * const q);

    void parseExportJournalToS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportJournalToS3Response)
    Q_DISABLE_COPY(ExportJournalToS3ResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
