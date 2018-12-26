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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsigningprofileresponse.h"
#include "getsigningprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::GetSigningProfileResponse
 * \brief The GetSigningProfileResponse class provides an interace for signer GetSigningProfile responses.
 *
 * \inmodule QtAwssigner
 *
 *  You can use Code Signing for Amazon FreeRTOS (AWS Signer) to sign code that you created for any of the IoT devices that
 *  Amazon Web Services supports. AWS Signer is integrated with Amazon FreeRTOS, AWS Certificate Manager, and AWS
 *  CloudTrail. Amazon FreeRTOS customers can use AWS Signer to sign code images before making them available for
 *  microcontrollers. You can use ACM to import third-party certificates to be used by AWS Signer. For general information
 *  about using AWS Signer, see the <a href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">Code
 *  Signing for Amazon FreeRTOS Developer
 *
 * \sa signerClient::getSigningProfile
 */

/*!
 * Constructs a GetSigningProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetSigningProfileResponse::GetSigningProfileResponse(
        const GetSigningProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new GetSigningProfileResponsePrivate(this), parent)
{
    setRequest(new GetSigningProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSigningProfileRequest * GetSigningProfileResponse::request() const
{
    Q_D(const GetSigningProfileResponse);
    return static_cast<const GetSigningProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful signer GetSigningProfile \a response.
 */
void GetSigningProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSigningProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::GetSigningProfileResponsePrivate
 * \brief The GetSigningProfileResponsePrivate class provides private implementation for GetSigningProfileResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a GetSigningProfileResponsePrivate object with public implementation \a q.
 */
GetSigningProfileResponsePrivate::GetSigningProfileResponsePrivate(
    GetSigningProfileResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer GetSigningProfile response element from \a xml.
 */
void GetSigningProfileResponsePrivate::parseGetSigningProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSigningProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
