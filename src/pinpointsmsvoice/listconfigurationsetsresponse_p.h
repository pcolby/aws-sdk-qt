// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONSETSRESPONSE_P_H

#include "pinpointsmsvoiceresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

class ListConfigurationSetsResponse;

class ListConfigurationSetsResponsePrivate : public PinpointSmsVoiceResponsePrivate {

public:

    explicit ListConfigurationSetsResponsePrivate(ListConfigurationSetsResponse * const q);

    void parseListConfigurationSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationSetsResponse)
    Q_DISABLE_COPY(ListConfigurationSetsResponsePrivate)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
