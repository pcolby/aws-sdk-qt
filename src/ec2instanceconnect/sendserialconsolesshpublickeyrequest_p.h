/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_P_H
#define QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_P_H

#include "ec2instanceconnectrequest_p.h"
#include "sendserialconsolesshpublickeyrequest.h"

namespace QtAws {
namespace EC2InstanceConnect {

class SendSerialConsoleSSHPublicKeyRequest;

class QTAWS_EXPORT SendSerialConsoleSSHPublicKeyRequestPrivate : public EC2InstanceConnectRequestPrivate {

public:
    SendSerialConsoleSSHPublicKeyRequestPrivate(const EC2InstanceConnectRequest::Action action,
                                   SendSerialConsoleSSHPublicKeyRequest * const q);
    SendSerialConsoleSSHPublicKeyRequestPrivate(const SendSerialConsoleSSHPublicKeyRequestPrivate &other,
                                   SendSerialConsoleSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendSerialConsoleSSHPublicKeyRequest)

};

} // namespace EC2InstanceConnect
} // namespace QtAws

#endif
