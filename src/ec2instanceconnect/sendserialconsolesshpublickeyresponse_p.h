// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSERIALCONSOLESSHPUBLICKEYRESPONSE_P_H
#define QTAWS_SENDSERIALCONSOLESSHPUBLICKEYRESPONSE_P_H

#include "ec2instanceconnectresponse_p.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSerialConsoleSSHPublicKeyResponse;

class SendSerialConsoleSSHPublicKeyResponsePrivate : public Ec2InstanceConnectResponsePrivate {

public:

    explicit SendSerialConsoleSSHPublicKeyResponsePrivate(SendSerialConsoleSSHPublicKeyResponse * const q);

    void parseSendSerialConsoleSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendSerialConsoleSSHPublicKeyResponse)
    Q_DISABLE_COPY(SendSerialConsoleSSHPublicKeyResponsePrivate)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
