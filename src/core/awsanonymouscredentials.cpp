// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
