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

#include "awsanonymouscredentials.h"

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAnonymousCredentials
 * \brief The AwsAnonymousCredentials class provides anonymous AWS credentials.
 */

/*!
 * @brief  Constructs a new AwsAnonymousCredentials object.
 *
 * Constructs a new AwsAnonymousCredentials object, with no credentials at all.
 *
 * @param  parent  The constructed object's optional parent.
 */
AwsAnonymousCredentials::AwsAnonymousCredentials(QObject * const parent) : AwsAbstractCredentials(parent)
{
}

QString AwsAnonymousCredentials::accessKeyId() const
{
    return QString();
}

QString AwsAnonymousCredentials::secretKey() const
{
    return QString();
}

QString AwsAnonymousCredentials::token() const
{
    return QString();
}

} // namespace Core
} // namespace QtAws
