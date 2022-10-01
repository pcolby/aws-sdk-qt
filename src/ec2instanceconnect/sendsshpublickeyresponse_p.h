// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSSHPUBLICKEYRESPONSE_P_H
#define QTAWS_SENDSSHPUBLICKEYRESPONSE_P_H

#include "ec2instanceconnectresponse_p.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSSHPublicKeyResponse;

class SendSSHPublicKeyResponsePrivate : public Ec2InstanceConnectResponsePrivate {

public:

    explicit SendSSHPublicKeyResponsePrivate(SendSSHPublicKeyResponse * const q);

    void parseSendSSHPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendSSHPublicKeyResponse)
    Q_DISABLE_COPY(SendSSHPublicKeyResponsePrivate)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
