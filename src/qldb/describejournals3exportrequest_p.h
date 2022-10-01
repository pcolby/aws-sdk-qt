// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALS3EXPORTREQUEST_P_H
#define QTAWS_DESCRIBEJOURNALS3EXPORTREQUEST_P_H

#include "qldbrequest_p.h"
#include "describejournals3exportrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalS3ExportRequest;

class DescribeJournalS3ExportRequestPrivate : public QldbRequestPrivate {

public:
    DescribeJournalS3ExportRequestPrivate(const QldbRequest::Action action,
                                   DescribeJournalS3ExportRequest * const q);
    DescribeJournalS3ExportRequestPrivate(const DescribeJournalS3ExportRequestPrivate &other,
                                   DescribeJournalS3ExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJournalS3ExportRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
