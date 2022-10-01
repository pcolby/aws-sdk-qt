// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorStreamingConfigurationResponse;

class GetVoiceConnectorStreamingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorStreamingConfigurationResponsePrivate(GetVoiceConnectorStreamingConfigurationResponse * const q);

    void parseGetVoiceConnectorStreamingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorStreamingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
