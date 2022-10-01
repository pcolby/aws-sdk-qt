// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteConfigurationSetResponse;

class DeleteConfigurationSetResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteConfigurationSetResponsePrivate(DeleteConfigurationSetResponse * const q);

    void parseDeleteConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
