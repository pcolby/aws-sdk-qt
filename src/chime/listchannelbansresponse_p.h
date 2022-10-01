// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSRESPONSE_P_H
#define QTAWS_LISTCHANNELBANSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListChannelBansResponse;

class ListChannelBansResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListChannelBansResponsePrivate(ListChannelBansResponse * const q);

    void parseListChannelBansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelBansResponse)
    Q_DISABLE_COPY(ListChannelBansResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
