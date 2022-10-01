// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEMAXCONTACTSRESPONSE_P_H
#define QTAWS_UPDATEQUEUEMAXCONTACTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQueueMaxContactsResponse;

class UpdateQueueMaxContactsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQueueMaxContactsResponsePrivate(UpdateQueueMaxContactsResponse * const q);

    void parseUpdateQueueMaxContactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueMaxContactsResponse)
    Q_DISABLE_COPY(UpdateQueueMaxContactsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
