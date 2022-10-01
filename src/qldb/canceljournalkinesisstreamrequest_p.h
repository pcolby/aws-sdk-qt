// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOURNALKINESISSTREAMREQUEST_P_H
#define QTAWS_CANCELJOURNALKINESISSTREAMREQUEST_P_H

#include "qldbrequest_p.h"
#include "canceljournalkinesisstreamrequest.h"

namespace QtAws {
namespace Qldb {

class CancelJournalKinesisStreamRequest;

class CancelJournalKinesisStreamRequestPrivate : public QldbRequestPrivate {

public:
    CancelJournalKinesisStreamRequestPrivate(const QldbRequest::Action action,
                                   CancelJournalKinesisStreamRequest * const q);
    CancelJournalKinesisStreamRequestPrivate(const CancelJournalKinesisStreamRequestPrivate &other,
                                   CancelJournalKinesisStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelJournalKinesisStreamRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
