// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationCredentialsResponse;

class DeleteVoiceConnectorTerminationCredentialsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorTerminationCredentialsResponsePrivate(DeleteVoiceConnectorTerminationCredentialsResponse * const q);

    void parseDeleteVoiceConnectorTerminationCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorTerminationCredentialsResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorTerminationCredentialsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
