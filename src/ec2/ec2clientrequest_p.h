/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EC2CLIENTREQUEST_P_H
#define QTAWS_EC2CLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace EC2 {

class Ec2ClientRequest;

class QTAWS_EXPORT Ec2ClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    Ec2ClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    Ec2ClientRequestPrivate(const Ec2ClientRequest::Action action, Ec2ClientRequest * const q);
    Ec2ClientRequestPrivate(const RequestPrivate &other, Ec2ClientRequest * const q);

    static QString toString(const Ec2ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Ec2ClientRequest)

};

} // namespace EC2
} // namespace AWS

#endif
