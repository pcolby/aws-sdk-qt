// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSSHPUBLICKEYREQUEST_H
#define QTAWS_SENDSSHPUBLICKEYREQUEST_H

#include "ec2instanceconnectrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSSHPublicKeyRequestPrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT SendSSHPublicKeyRequest : public Ec2InstanceConnectRequest {

public:
    SendSSHPublicKeyRequest(const SendSSHPublicKeyRequest &other);
    SendSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendSSHPublicKeyRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
