// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateConfigurationSetResponse;

class CreateConfigurationSetResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit CreateConfigurationSetResponsePrivate(CreateConfigurationSetResponse * const q);

    void parseCreateConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetResponse)
    Q_DISABLE_COPY(CreateConfigurationSetResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
