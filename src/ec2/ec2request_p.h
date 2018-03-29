/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EC2REQUEST_P_H
#define QTAWS_EC2REQUEST_P_H

#include "ec2_p.h"
#include "ec2request.h"

namespace QtAws {
namespace EC2 {

class EC2Request;

class QTAWS_EXPORT EC2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EC2Request::Action action; ///< EC2 action to be performed.
    QString apiVersion;        ///< EC2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EC2 request (query string) parameters. @todo?

    EC2RequestPrivate(const EC2Request::Action action, EC2Request * const q);
    EC2RequestPrivate(const EC2RequestPrivate &other, EC2Request * const q);

    static QString toString(const EC2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(EC2Request)

};

} // namespace EC2
} // namespace QtAws

#endif
