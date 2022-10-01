// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORGROUPSRESPONSE_P_H
#define QTAWS_LISTVOICECONNECTORGROUPSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorGroupsResponse;

class ListVoiceConnectorGroupsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListVoiceConnectorGroupsResponsePrivate(ListVoiceConnectorGroupsResponse * const q);

    void parseListVoiceConnectorGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorGroupsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorGroupsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
