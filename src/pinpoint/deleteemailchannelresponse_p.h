// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILCHANNELRESPONSE_P_H
#define QTAWS_DELETEEMAILCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailChannelResponse;

class DeleteEmailChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteEmailChannelResponsePrivate(DeleteEmailChannelResponse * const q);

    void parseDeleteEmailChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailChannelResponse)
    Q_DISABLE_COPY(DeleteEmailChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
