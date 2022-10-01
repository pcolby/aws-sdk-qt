// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forgetdeviceresponse.h"
#include "forgetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceResponse
 * \brief The ForgetDeviceResponse class provides an interace for CognitoIdentityProvider ForgetDevice responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::forgetDevice
 */

/*!
 * Constructs a ForgetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ForgetDeviceResponse::ForgetDeviceResponse(
        const ForgetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ForgetDeviceResponsePrivate(this), parent)
{
    setRequest(new ForgetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ForgetDeviceRequest * ForgetDeviceResponse::request() const
{
    Q_D(const ForgetDeviceResponse);
    return static_cast<const ForgetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ForgetDevice \a response.
 */
void ForgetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ForgetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceResponsePrivate
 * \brief The ForgetDeviceResponsePrivate class provides private implementation for ForgetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ForgetDeviceResponsePrivate object with public implementation \a q.
 */
ForgetDeviceResponsePrivate::ForgetDeviceResponsePrivate(
    ForgetDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ForgetDevice response element from \a xml.
 */
void ForgetDeviceResponsePrivate::parseForgetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ForgetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
