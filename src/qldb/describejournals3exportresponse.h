// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALS3EXPORTRESPONSE_H
#define QTAWS_DESCRIBEJOURNALS3EXPORTRESPONSE_H

#include "qldbresponse.h"
#include "describejournals3exportrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalS3ExportResponsePrivate;

class QTAWSQLDB_EXPORT DescribeJournalS3ExportResponse : public QldbResponse {
    Q_OBJECT

public:
    DescribeJournalS3ExportResponse(const DescribeJournalS3ExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJournalS3ExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJournalS3ExportResponse)
    Q_DISABLE_COPY(DescribeJournalS3ExportResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
