// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALKINESISSTREAMREQUEST_P_H
#define QTAWS_DESCRIBEJOURNALKINESISSTREAMREQUEST_P_H

#include "qldbrequest_p.h"
#include "describejournalkinesisstreamrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalKinesisStreamRequest;

class DescribeJournalKinesisStreamRequestPrivate : public QldbRequestPrivate {

public:
    DescribeJournalKinesisStreamRequestPrivate(const QldbRequest::Action action,
                                   DescribeJournalKinesisStreamRequest * const q);
    DescribeJournalKinesisStreamRequestPrivate(const DescribeJournalKinesisStreamRequestPrivate &other,
                                   DescribeJournalKinesisStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJournalKinesisStreamRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
