// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMESSAGINGRESPONSE_P_H
#define QTAWS_CHIMESDKMESSAGINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingResponse;

class ChimeSdkMessagingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ChimeSdkMessagingResponsePrivate(ChimeSdkMessagingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMessagingResponse)
    Q_DISABLE_COPY(ChimeSdkMessagingResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
