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

#ifndef QTAWS_CLOUD9CLIENTREQUEST_P_H
#define QTAWS_CLOUD9CLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace  {

class Cloud9ClientRequest;

class QTAWS_EXPORT Cloud9ClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    Cloud9ClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    Cloud9ClientRequestPrivate(const Cloud9ClientRequest::Action action, Cloud9ClientRequest * const q);
    Cloud9ClientRequestPrivate(const RequestPrivate &other, Cloud9ClientRequest * const q);

    static QString toString(const Cloud9ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Cloud9ClientRequest)

};

} // namespace 
} // namespace AWS

#endif
