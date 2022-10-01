// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTOUTLISTRESPONSE_P_H
#define QTAWS_CREATEOPTOUTLISTRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateOptOutListResponse;

class CreateOptOutListResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit CreateOptOutListResponsePrivate(CreateOptOutListResponse * const q);

    void parseCreateOptOutListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOptOutListResponse)
    Q_DISABLE_COPY(CreateOptOutListResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
