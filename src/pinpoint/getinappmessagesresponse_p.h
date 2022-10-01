// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPMESSAGESRESPONSE_P_H
#define QTAWS_GETINAPPMESSAGESRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppMessagesResponse;

class GetInAppMessagesResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetInAppMessagesResponsePrivate(GetInAppMessagesResponse * const q);

    void parseGetInAppMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInAppMessagesResponse)
    Q_DISABLE_COPY(GetInAppMessagesResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
