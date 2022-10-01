// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSSHPUBLICKEYRESPONSE_H
#define QTAWS_SENDSSHPUBLICKEYRESPONSE_H

#include "ec2instanceconnectresponse.h"
#include "sendsshpublickeyrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSSHPublicKeyResponsePrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT SendSSHPublicKeyResponse : public Ec2InstanceConnectResponse {
    Q_OBJECT

public:
    SendSSHPublicKeyResponse(const SendSSHPublicKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendSSHPublicKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendSSHPublicKeyResponse)
    Q_DISABLE_COPY(SendSSHPublicKeyResponse)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
