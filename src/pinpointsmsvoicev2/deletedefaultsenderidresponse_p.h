// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTSENDERIDRESPONSE_P_H
#define QTAWS_DELETEDEFAULTSENDERIDRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultSenderIdResponse;

class DeleteDefaultSenderIdResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteDefaultSenderIdResponsePrivate(DeleteDefaultSenderIdResponse * const q);

    void parseDeleteDefaultSenderIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDefaultSenderIdResponse)
    Q_DISABLE_COPY(DeleteDefaultSenderIdResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
