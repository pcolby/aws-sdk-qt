// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMODERATORRESPONSE_P_H
#define QTAWS_CREATECHANNELMODERATORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateChannelModeratorResponse;

class CreateChannelModeratorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateChannelModeratorResponsePrivate(CreateChannelModeratorResponse * const q);

    void parseCreateChannelModeratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelModeratorResponse)
    Q_DISABLE_COPY(CreateChannelModeratorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
