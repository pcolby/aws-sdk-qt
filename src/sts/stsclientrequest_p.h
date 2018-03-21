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

#ifndef QTAWS_STSCLIENTREQUEST_P_H
#define QTAWS_STSCLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace  {

class StsClientRequest;

class QTAWS_EXPORT StsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    StsClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    StsClientRequestPrivate(const StsClientRequest::Action action, StsClientRequest * const q);
    StsClientRequestPrivate(const RequestPrivate &other, StsClientRequest * const q);

    static QString toString(const StsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(StsClientRequest)

};

} // namespace 
} // namespace AWS

#endif
