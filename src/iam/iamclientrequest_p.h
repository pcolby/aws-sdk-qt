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

#ifndef QTAWS_IAMCLIENTREQUEST_P_H
#define QTAWS_IAMCLIENTREQUEST_P_H

#include "iam_p.h"
#include "iamclientrequest.h"

namespace AWS {

namespace IAM {

class IamClientRequest;

class QTAWS_EXPORT IamClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    IamClientRequest::Action action; ///< IAM action to be performed.
    QString apiVersion;        ///< IAM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IAM request (query string) parameters. @todo?

    IamClientRequestPrivate(const IamClientRequest::Action action, IamClientRequest * const q);
    IamClientRequestPrivate(const IamClientRequestPrivate &other, IamClientRequest * const q);

    static QString toString(const IamClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IamClientRequest)

};

} // namespace IAM
} // namespace AWS

#endif
