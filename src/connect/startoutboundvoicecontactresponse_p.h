// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOUTBOUNDVOICECONTACTRESPONSE_P_H
#define QTAWS_STARTOUTBOUNDVOICECONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StartOutboundVoiceContactResponse;

class StartOutboundVoiceContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StartOutboundVoiceContactResponsePrivate(StartOutboundVoiceContactResponse * const q);

    void parseStartOutboundVoiceContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartOutboundVoiceContactResponse)
    Q_DISABLE_COPY(StartOutboundVoiceContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
