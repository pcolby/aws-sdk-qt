// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOOLRESPONSE_P_H
#define QTAWS_DELETEPOOLRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeletePoolResponse;

class DeletePoolResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeletePoolResponsePrivate(DeletePoolResponse * const q);

    void parseDeletePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePoolResponse)
    Q_DISABLE_COPY(DeletePoolResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
