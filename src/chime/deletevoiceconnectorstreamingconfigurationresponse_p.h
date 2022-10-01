// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorStreamingConfigurationResponse;

class DeleteVoiceConnectorStreamingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorStreamingConfigurationResponsePrivate(DeleteVoiceConnectorStreamingConfigurationResponse * const q);

    void parseDeleteVoiceConnectorStreamingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorStreamingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
