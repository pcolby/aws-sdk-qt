// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H
#define QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorTerminationCredentialsResponse;

class ListVoiceConnectorTerminationCredentialsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListVoiceConnectorTerminationCredentialsResponsePrivate(ListVoiceConnectorTerminationCredentialsResponse * const q);

    void parseListVoiceConnectorTerminationCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(ListVoiceConnectorTerminationCredentialsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
