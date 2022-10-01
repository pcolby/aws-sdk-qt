// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEADLETTERSOURCEQUEUESRESPONSE_P_H
#define QTAWS_LISTDEADLETTERSOURCEQUEUESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ListDeadLetterSourceQueuesResponse;

class ListDeadLetterSourceQueuesResponsePrivate : public SqsResponsePrivate {

public:

    explicit ListDeadLetterSourceQueuesResponsePrivate(ListDeadLetterSourceQueuesResponse * const q);

    void parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeadLetterSourceQueuesResponse)
    Q_DISABLE_COPY(ListDeadLetterSourceQueuesResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
