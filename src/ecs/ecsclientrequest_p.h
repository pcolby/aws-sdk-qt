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

#ifndef QTAWS_ECSCLIENTREQUEST_P_H
#define QTAWS_ECSCLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace  {

class EcsClientRequest;

class QTAWS_EXPORT EcsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    EcsClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    EcsClientRequestPrivate(const EcsClientRequest::Action action, EcsClientRequest * const q);
    EcsClientRequestPrivate(const RequestPrivate &other, EcsClientRequest * const q);

    static QString toString(const EcsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EcsClientRequest)

};

} // namespace 
} // namespace AWS

#endif
