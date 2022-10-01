// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTDEADLETTERSOURCEQUEUESRESPONSE_P_H
#define SQSLISTDEADLETTERSOURCEQUEUESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsListDeadLetterSourceQueuesResponse;

class SqsListDeadLetterSourceQueuesResponsePrivate : public SqsResponsePrivate {

public:
    SqsListDeadLetterSourceQueuesResponsePrivate(SqsListDeadLetterSourceQueuesResponse * const q);

    void parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsListDeadLetterSourceQueuesResponse)
    Q_DISABLE_COPY(SqsListDeadLetterSourceQueuesResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
