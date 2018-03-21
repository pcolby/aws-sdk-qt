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

#ifndef QTAWS_FIREHOSECLIENTREQUEST_P_H
#define QTAWS_FIREHOSECLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace  {

class FirehoseClientRequest;

class QTAWS_EXPORT FirehoseClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    FirehoseClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    FirehoseClientRequestPrivate(const FirehoseClientRequest::Action action, FirehoseClientRequest * const q);
    FirehoseClientRequestPrivate(const RequestPrivate &other, FirehoseClientRequest * const q);

    static QString toString(const FirehoseClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FirehoseClientRequest)

};

} // namespace 
} // namespace AWS

#endif
