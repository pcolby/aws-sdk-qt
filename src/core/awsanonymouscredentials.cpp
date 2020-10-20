/*
    Copyright 2013-2020 Paul Colby

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

#include "awsanonymouscredentials.h"

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAnonymousCredentials
 * \brief The AwsAnonymousCredentials class provides anonymous AWS credentials.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAnonymousCredentials object with parent \a parent.
 */
AwsAnonymousCredentials::AwsAnonymousCredentials(QObject * const parent) : AwsAbstractCredentials(parent)
{

}

/*!
 * \reimp
 */
QString AwsAnonymousCredentials::accessKeyId() const
{
    return QString();
}

/*!
 * \reimp
 */
QString AwsAnonymousCredentials::secretKey() const
{
    return QString();
}

/*!
 * \reimp
 */
QString AwsAnonymousCredentials::token() const
{
    return QString();
}

} // namespace Core
} // namespace QtAws
