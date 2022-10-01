// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorLoggingConfigurationResponse;

class GetVoiceConnectorLoggingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorLoggingConfigurationResponsePrivate(GetVoiceConnectorLoggingConfigurationResponse * const q);

    void parseGetVoiceConnectorLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorLoggingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
