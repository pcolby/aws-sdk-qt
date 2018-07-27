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

#include "getencryptionconfigresponse.h"
#include "getencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetEncryptionConfigResponse
 * \brief The GetEncryptionConfigResponse class provides an interace for XRay GetEncryptionConfig responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getEncryptionConfig
 */

/*!
 * Constructs a GetEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetEncryptionConfigResponse::GetEncryptionConfigResponse(
        const GetEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new GetEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEncryptionConfigRequest * GetEncryptionConfigResponse::request() const
{
    Q_D(const GetEncryptionConfigResponse);
    return static_cast<const GetEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetEncryptionConfig \a response.
 */
void GetEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetEncryptionConfigResponsePrivate
 * \brief The GetEncryptionConfigResponsePrivate class provides private implementation for GetEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetEncryptionConfigResponsePrivate object with public implementation \a q.
 */
GetEncryptionConfigResponsePrivate::GetEncryptionConfigResponsePrivate(
    GetEncryptionConfigResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetEncryptionConfig response element from \a xml.
 */
void GetEncryptionConfigResponsePrivate::parseGetEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
