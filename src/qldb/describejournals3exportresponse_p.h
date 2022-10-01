// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALS3EXPORTRESPONSE_P_H
#define QTAWS_DESCRIBEJOURNALS3EXPORTRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalS3ExportResponse;

class DescribeJournalS3ExportResponsePrivate : public QldbResponsePrivate {

public:

    explicit DescribeJournalS3ExportResponsePrivate(DescribeJournalS3ExportResponse * const q);

    void parseDescribeJournalS3ExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJournalS3ExportResponse)
    Q_DISABLE_COPY(DescribeJournalS3ExportResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
