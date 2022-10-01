// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORSRESPONSE_P_H
#define QTAWS_LISTVOICECONNECTORSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorsResponse;

class ListVoiceConnectorsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListVoiceConnectorsResponsePrivate(ListVoiceConnectorsResponse * const q);

    void parseListVoiceConnectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
