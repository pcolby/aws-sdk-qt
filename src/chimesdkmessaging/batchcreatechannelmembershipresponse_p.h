// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATECHANNELMEMBERSHIPRESPONSE_P_H
#define QTAWS_BATCHCREATECHANNELMEMBERSHIPRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class BatchCreateChannelMembershipResponse;

class BatchCreateChannelMembershipResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit BatchCreateChannelMembershipResponsePrivate(BatchCreateChannelMembershipResponse * const q);

    void parseBatchCreateChannelMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateChannelMembershipResponse)
    Q_DISABLE_COPY(BatchCreateChannelMembershipResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
