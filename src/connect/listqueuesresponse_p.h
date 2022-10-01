// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESRESPONSE_P_H
#define QTAWS_LISTQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListQueuesResponse;

class ListQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListQueuesResponsePrivate(ListQueuesResponse * const q);

    void parseListQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueuesResponse)
    Q_DISABLE_COPY(ListQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
