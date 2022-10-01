// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANRESPONSE_P_H
#define QTAWS_CREATECHANNELBANRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateChannelBanResponse;

class CreateChannelBanResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateChannelBanResponsePrivate(CreateChannelBanResponse * const q);

    void parseCreateChannelBanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelBanResponse)
    Q_DISABLE_COPY(CreateChannelBanResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
