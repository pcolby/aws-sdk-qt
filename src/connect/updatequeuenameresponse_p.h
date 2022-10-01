// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUENAMERESPONSE_P_H
#define QTAWS_UPDATEQUEUENAMERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateQueueNameResponse;

class UpdateQueueNameResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateQueueNameResponsePrivate(UpdateQueueNameResponse * const q);

    void parseUpdateQueueNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQueueNameResponse)
    Q_DISABLE_COPY(UpdateQueueNameResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
