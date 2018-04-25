/*
    Copyright 2013-2018 Paul Colby

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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

#include "awsabstractcredentials_p.h"

#include <QString>

namespace QtAws {
namespace Core {

class AwsBasicCredentials;

class QTAWS_EXPORT AwsBasicCredentialsPrivate : public AwsAbstractCredentialsPrivate {

public:
    QString accessKeyId; ///< AWS Access Key ID.
    QString secretKey;   ///< AWS Secret Access Key.
    QString token;       ///< AWS Security Token.

    AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    Q_DECLARE_PUBLIC(AwsBasicCredentials)
    Q_DISABLE_COPY(AwsBasicCredentialsPrivate)

};

} // namespace Core
} // namespace QtAws

#endif
