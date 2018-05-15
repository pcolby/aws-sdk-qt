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

#include "putencryptionconfigresponse.h"
#include "putencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutEncryptionConfigResponse
 * \brief The PutEncryptionConfigResponse class provides an interace for XRay PutEncryptionConfig responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::putEncryptionConfig
 */

/*!
 * Constructs a PutEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
PutEncryptionConfigResponse::PutEncryptionConfigResponse(
        const PutEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new PutEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new PutEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEncryptionConfigRequest * PutEncryptionConfigResponse::request() const
{
    Q_D(const PutEncryptionConfigResponse);
    return static_cast<const PutEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay PutEncryptionConfig \a response.
 */
void PutEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::PutEncryptionConfigResponsePrivate
 * \brief The PutEncryptionConfigResponsePrivate class provides private implementation for PutEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutEncryptionConfigResponsePrivate object with public implementation \a q.
 */
PutEncryptionConfigResponsePrivate::PutEncryptionConfigResponsePrivate(
    PutEncryptionConfigResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay PutEncryptionConfig response element from \a xml.
 */
void PutEncryptionConfigResponsePrivate::parsePutEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEncryptionConfigResponse"));
    /// @todo
}

} // namespace XRay
} // namespace QtAws
