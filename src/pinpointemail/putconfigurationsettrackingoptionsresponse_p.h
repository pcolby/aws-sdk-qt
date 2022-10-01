// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetTrackingOptionsResponse;

class PutConfigurationSetTrackingOptionsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutConfigurationSetTrackingOptionsResponsePrivate(PutConfigurationSetTrackingOptionsResponse * const q);

    void parsePutConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetTrackingOptionsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
