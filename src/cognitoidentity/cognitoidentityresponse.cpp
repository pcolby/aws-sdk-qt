// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cognitoidentityresponse.h"
#include "cognitoidentityresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::CognitoIdentityResponse
 * \brief The CognitoIdentityResponse class provides an interface for CognitoIdentity responses.
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a CognitoIdentityResponse object with parent \a parent.
 */
CognitoIdentityResponse::CognitoIdentityResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CognitoIdentityResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CognitoIdentityResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoIdentityResponsePrivate.
 */
CognitoIdentityResponse::CognitoIdentityResponse(CognitoIdentityResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CognitoIdentityResponse::parseFailure(QIODevice &response)
{
    //Q_D(CognitoIdentityResponse);
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
 * \class QtAws::CognitoIdentity::CognitoIdentityResponsePrivate
 * \brief The CognitoIdentityResponsePrivate class provides private implementation for CognitoIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a CognitoIdentityResponsePrivate object with public implementation \a q.
 */
CognitoIdentityResponsePrivate::CognitoIdentityResponsePrivate(
    CognitoIdentityResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
