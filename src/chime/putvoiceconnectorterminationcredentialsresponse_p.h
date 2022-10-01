// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationCredentialsResponse;

class PutVoiceConnectorTerminationCredentialsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorTerminationCredentialsResponsePrivate(PutVoiceConnectorTerminationCredentialsResponse * const q);

    void parsePutVoiceConnectorTerminationCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(PutVoiceConnectorTerminationCredentialsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
