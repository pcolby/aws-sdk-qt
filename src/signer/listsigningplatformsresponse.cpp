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

#include "listsigningplatformsresponse.h"
#include "listsigningplatformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::ListSigningPlatformsResponse
 * \brief The ListSigningPlatformsResponse class provides an interace for signer ListSigningPlatforms responses.
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
 * \sa signerClient::listSigningPlatforms
 */

/*!
 * Constructs a ListSigningPlatformsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSigningPlatformsResponse::ListSigningPlatformsResponse(
        const ListSigningPlatformsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new ListSigningPlatformsResponsePrivate(this), parent)
{
    setRequest(new ListSigningPlatformsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSigningPlatformsRequest * ListSigningPlatformsResponse::request() const
{
    Q_D(const ListSigningPlatformsResponse);
    return static_cast<const ListSigningPlatformsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful signer ListSigningPlatforms \a response.
 */
void ListSigningPlatformsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSigningPlatformsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::ListSigningPlatformsResponsePrivate
 * \brief The ListSigningPlatformsResponsePrivate class provides private implementation for ListSigningPlatformsResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a ListSigningPlatformsResponsePrivate object with public implementation \a q.
 */
ListSigningPlatformsResponsePrivate::ListSigningPlatformsResponsePrivate(
    ListSigningPlatformsResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer ListSigningPlatforms response element from \a xml.
 */
void ListSigningPlatformsResponsePrivate::parseListSigningPlatformsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSigningPlatformsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
