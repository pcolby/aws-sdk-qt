// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2INSTANCECONNECTCLIENT_P_H
#define QTAWS_EC2INSTANCECONNECTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectClient;

class Ec2InstanceConnectClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Ec2InstanceConnectClientPrivate(Ec2InstanceConnectClient * const q);

private:
    Q_DECLARE_PUBLIC(Ec2InstanceConnectClient)
    Q_DISABLE_COPY(Ec2InstanceConnectClientPrivate)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
