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
