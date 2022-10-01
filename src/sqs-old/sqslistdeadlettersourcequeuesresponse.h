// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTDEADLETTERSOURCEQUEUES_H
#define SQSLISTDEADLETTERSOURCEQUEUES_H

#include "sqslistdeadlettersourcequeuesrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsListDeadLetterSourceQueuesResponsePrivate;

class QTAWS_EXPORT SqsListDeadLetterSourceQueuesResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsListDeadLetterSourceQueuesResponse(const SqsListDeadLetterSourceQueuesRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsListDeadLetterSourceQueuesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsListDeadLetterSourceQueuesResponse)
    Q_DISABLE_COPY(SqsListDeadLetterSourceQueuesResponse)
    friend class TestSqsListDeadLetterSourceQueuesResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
