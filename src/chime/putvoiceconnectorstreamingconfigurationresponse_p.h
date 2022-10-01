// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorStreamingConfigurationResponse;

class PutVoiceConnectorStreamingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorStreamingConfigurationResponsePrivate(PutVoiceConnectorStreamingConfigurationResponse * const q);

    void parsePutVoiceConnectorStreamingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorStreamingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
