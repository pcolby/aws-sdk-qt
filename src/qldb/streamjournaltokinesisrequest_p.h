// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STREAMJOURNALTOKINESISREQUEST_P_H
#define QTAWS_STREAMJOURNALTOKINESISREQUEST_P_H

#include "qldbrequest_p.h"
#include "streamjournaltokinesisrequest.h"

namespace QtAws {
namespace Qldb {

class StreamJournalToKinesisRequest;

class StreamJournalToKinesisRequestPrivate : public QldbRequestPrivate {

public:
    StreamJournalToKinesisRequestPrivate(const QldbRequest::Action action,
                                   StreamJournalToKinesisRequest * const q);
    StreamJournalToKinesisRequestPrivate(const StreamJournalToKinesisRequestPrivate &other,
                                   StreamJournalToKinesisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StreamJournalToKinesisRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
