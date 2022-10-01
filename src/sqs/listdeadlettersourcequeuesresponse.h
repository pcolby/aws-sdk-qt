// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEADLETTERSOURCEQUEUESRESPONSE_H
#define QTAWS_LISTDEADLETTERSOURCEQUEUESRESPONSE_H

#include "sqsresponse.h"
#include "listdeadlettersourcequeuesrequest.h"

namespace QtAws {
namespace Sqs {

class ListDeadLetterSourceQueuesResponsePrivate;

class QTAWSSQS_EXPORT ListDeadLetterSourceQueuesResponse : public SqsResponse {
    Q_OBJECT

public:
    ListDeadLetterSourceQueuesResponse(const ListDeadLetterSourceQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeadLetterSourceQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeadLetterSourceQueuesResponse)
    Q_DISABLE_COPY(ListDeadLetterSourceQueuesResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
