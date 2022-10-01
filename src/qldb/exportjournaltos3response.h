// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTJOURNALTOS3RESPONSE_H
#define QTAWS_EXPORTJOURNALTOS3RESPONSE_H

#include "qldbresponse.h"
#include "exportjournaltos3request.h"

namespace QtAws {
namespace Qldb {

class ExportJournalToS3ResponsePrivate;

class QTAWSQLDB_EXPORT ExportJournalToS3Response : public QldbResponse {
    Q_OBJECT

public:
    ExportJournalToS3Response(const ExportJournalToS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportJournalToS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportJournalToS3Response)
    Q_DISABLE_COPY(ExportJournalToS3Response)

};

} // namespace Qldb
} // namespace QtAws

#endif
