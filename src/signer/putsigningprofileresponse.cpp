/*
    Copyright 2013-2021 Paul Colby

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

#include "putsigningprofileresponse.h"
#include "putsigningprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::PutSigningProfileResponse
 * \brief The PutSigningProfileResponse class provides an interace for signer PutSigningProfile responses.
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
 * \sa signerClient::putSigningProfile
 */

/*!
 * Constructs a PutSigningProfileResponse object for \a reply to \a request, with parent \a parent.
 */
PutSigningProfileResponse::PutSigningProfileResponse(
        const PutSigningProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new PutSigningProfileResponsePrivate(this), parent)
{
    setRequest(new PutSigningProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSigningProfileRequest * PutSigningProfileResponse::request() const
{
    Q_D(const PutSigningProfileResponse);
    return static_cast<const PutSigningProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful signer PutSigningProfile \a response.
 */
void PutSigningProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSigningProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::PutSigningProfileResponsePrivate
 * \brief The PutSigningProfileResponsePrivate class provides private implementation for PutSigningProfileResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a PutSigningProfileResponsePrivate object with public implementation \a q.
 */
PutSigningProfileResponsePrivate::PutSigningProfileResponsePrivate(
    PutSigningProfileResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer PutSigningProfile response element from \a xml.
 */
void PutSigningProfileResponsePrivate::parsePutSigningProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSigningProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
