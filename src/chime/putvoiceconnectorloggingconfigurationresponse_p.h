// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORLOGGINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorLoggingConfigurationResponse;

class PutVoiceConnectorLoggingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorLoggingConfigurationResponsePrivate(PutVoiceConnectorLoggingConfigurationResponse * const q);

    void parsePutVoiceConnectorLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorLoggingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
