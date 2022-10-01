// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESRESPONSE_P_H
#define QTAWS_LISTQUEUESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ListQueuesResponse;

class ListQueuesResponsePrivate : public SqsResponsePrivate {

public:

    explicit ListQueuesResponsePrivate(ListQueuesResponse * const q);

    void parseListQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueuesResponse)
    Q_DISABLE_COPY(ListQueuesResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
