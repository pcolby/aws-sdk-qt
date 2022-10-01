// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTEMAILRESPONSE_P_H
#define QTAWS_PINPOINTEMAILRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailResponse;

class PinpointEmailResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PinpointEmailResponsePrivate(PinpointEmailResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PinpointEmailResponse)
    Q_DISABLE_COPY(PinpointEmailResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
