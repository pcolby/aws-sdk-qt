// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROKERSRESPONSE_P_H
#define QTAWS_LISTBROKERSRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class ListBrokersResponse;

class ListBrokersResponsePrivate : public MqResponsePrivate {

public:

    explicit ListBrokersResponsePrivate(ListBrokersResponse * const q);

    void parseListBrokersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBrokersResponse)
    Q_DISABLE_COPY(ListBrokersResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
