// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUERESPONSE_P_H
#define QTAWS_CREATEQUEUERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateQueueResponse;

class CreateQueueResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateQueueResponsePrivate(CreateQueueResponse * const q);

    void parseCreateQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQueueResponse)
    Q_DISABLE_COPY(CreateQueueResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
