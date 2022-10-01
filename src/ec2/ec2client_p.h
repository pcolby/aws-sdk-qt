// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2CLIENT_P_H
#define QTAWS_EC2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ec2 {

class Ec2Client;

class Ec2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Ec2ClientPrivate(Ec2Client * const q);

private:
    Q_DECLARE_PUBLIC(Ec2Client)
    Q_DISABLE_COPY(Ec2ClientPrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
