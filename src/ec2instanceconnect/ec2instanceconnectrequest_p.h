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
namespace EC2InstanceConnect {

class EC2InstanceConnectRequest;

class EC2InstanceConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EC2InstanceConnectRequest::Action action; ///< EC2InstanceConnect action to be performed.
    QString apiVersion;        ///< EC2InstanceConnect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EC2InstanceConnect request (query string) parameters. @todo?

    EC2InstanceConnectRequestPrivate(const EC2InstanceConnectRequest::Action action, EC2InstanceConnectRequest * const q);
    EC2InstanceConnectRequestPrivate(const EC2InstanceConnectRequestPrivate &other, EC2InstanceConnectRequest * const q);

    static QString toString(const EC2InstanceConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EC2InstanceConnectRequest)

};

} // namespace EC2InstanceConnect
} // namespace QtAws

#endif
