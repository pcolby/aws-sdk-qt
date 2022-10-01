// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELRESPONSE_P_H
#define QTAWS_CREATECHANNELRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreateChannelResponse;

class CreateChannelResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreateChannelResponsePrivate(CreateChannelResponse * const q);

    void parseCreateChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelResponse)
    Q_DISABLE_COPY(CreateChannelResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
