// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGERESPONSE_P_H
#define QTAWS_GETCHANNELMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetChannelMessageResponse;

class GetChannelMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetChannelMessageResponsePrivate(GetChannelMessageResponse * const q);

    void parseGetChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelMessageResponse)
    Q_DISABLE_COPY(GetChannelMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
