// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cognitoidentityproviderresponse.h"
#include "cognitoidentityproviderresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderResponse
 * \brief The CognitoIdentityProviderResponse class provides an interface for CognitoIdentityProvider responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CognitoIdentityProviderResponse object with parent \a parent.
 */
CognitoIdentityProviderResponse::CognitoIdentityProviderResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CognitoIdentityProviderResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CognitoIdentityProviderResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoIdentityProviderResponsePrivate.
 */
CognitoIdentityProviderResponse::CognitoIdentityProviderResponse(CognitoIdentityProviderResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CognitoIdentityProviderResponse::parseFailure(QIODevice &response)
{
    //Q_D(CognitoIdentityProviderResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderResponsePrivate
 * \brief The CognitoIdentityProviderResponsePrivate class provides private implementation for CognitoIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CognitoIdentityProviderResponsePrivate object with public implementation \a q.
 */
CognitoIdentityProviderResponsePrivate::CognitoIdentityProviderResponsePrivate(
    CognitoIdentityProviderResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
