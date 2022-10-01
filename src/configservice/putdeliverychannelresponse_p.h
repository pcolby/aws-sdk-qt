// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERYCHANNELRESPONSE_P_H
#define QTAWS_PUTDELIVERYCHANNELRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutDeliveryChannelResponse;

class PutDeliveryChannelResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutDeliveryChannelResponsePrivate(PutDeliveryChannelResponse * const q);

    void parsePutDeliveryChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDeliveryChannelResponse)
    Q_DISABLE_COPY(PutDeliveryChannelResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
