// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2INSTANCECONNECTREQUEST_P_H
#define QTAWS_EC2INSTANCECONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ec2instanceconnectrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectRequest;

class Ec2InstanceConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Ec2InstanceConnectRequest::Action action; ///< Ec2InstanceConnect action to be performed.
    QString apiVersion;        ///< Ec2InstanceConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ec2InstanceConnect request (query string) parameters. @todo?

    Ec2InstanceConnectRequestPrivate(const Ec2InstanceConnectRequest::Action action, Ec2InstanceConnectRequest * const q);
    Ec2InstanceConnectRequestPrivate(const Ec2InstanceConnectRequestPrivate &other, Ec2InstanceConnectRequest * const q);

    static QString toString(const Ec2InstanceConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Ec2InstanceConnectRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
