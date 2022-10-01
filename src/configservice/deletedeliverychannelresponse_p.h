// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYCHANNELRESPONSE_P_H
#define QTAWS_DELETEDELIVERYCHANNELRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteDeliveryChannelResponse;

class DeleteDeliveryChannelResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteDeliveryChannelResponsePrivate(DeleteDeliveryChannelResponse * const q);

    void parseDeleteDeliveryChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeliveryChannelResponse)
    Q_DISABLE_COPY(DeleteDeliveryChannelResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
