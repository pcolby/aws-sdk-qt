// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTOUTLISTRESPONSE_P_H
#define QTAWS_DELETEOPTOUTLISTRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptOutListResponse;

class DeleteOptOutListResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteOptOutListResponsePrivate(DeleteOptOutListResponse * const q);

    void parseDeleteOptOutListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOptOutListResponse)
    Q_DISABLE_COPY(DeleteOptOutListResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
