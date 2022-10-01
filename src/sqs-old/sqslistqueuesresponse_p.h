// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTQUEUESRESPONSE_P_H
#define SQSLISTQUEUESRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsListQueuesResponse;

class SqsListQueuesResponsePrivate : public SqsResponsePrivate {

public:
    SqsListQueuesResponsePrivate(SqsListQueuesResponse * const q);

    void parseListQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsListQueuesResponse)
    Q_DISABLE_COPY(SqsListQueuesResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
