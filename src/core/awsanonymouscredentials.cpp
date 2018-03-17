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

#include "awsanonymouscredentials.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAnonymousCredentials
 *
 * @brief  Basic implementation of AwsAbstractCredentials that allows use of "anonymous" credentials.
 */

/**
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

QTAWS_END_NAMESPACE
