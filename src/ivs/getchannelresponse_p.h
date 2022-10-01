// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELRESPONSE_P_H
#define QTAWS_GETCHANNELRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetChannelResponse;

class GetChannelResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetChannelResponsePrivate(GetChannelResponse * const q);

    void parseGetChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelResponse)
    Q_DISABLE_COPY(GetChannelResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
