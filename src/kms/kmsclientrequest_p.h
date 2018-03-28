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

#ifndef QTAWS_KMSCLIENTREQUEST_P_H
#define QTAWS_KMSCLIENTREQUEST_P_H

#include "_p.h"
#include "request.h"

namespace AWS {

namespace KMS {

class KmsClientRequest;

class QTAWS_EXPORT KmsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    KmsClientRequest::Action action; ///<  action to be performed.
    QString apiVersion;        ///<  API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///<  request (query string) parameters. @todo?

    KmsClientRequestPrivate(const KmsClientRequest::Action action, KmsClientRequest * const q);
    KmsClientRequestPrivate(const RequestPrivate &other, KmsClientRequest * const q);

    static QString toString(const KmsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KmsClientRequest)

};

} // namespace KMS
} // namespace AWS

#endif
