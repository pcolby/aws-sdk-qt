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

#include "rotateingestendpointcredentialsresponse.h"
#include "rotateingestendpointcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsResponse
 * \brief The RotateIngestEndpointCredentialsResponse class provides an interace for MediaPackage RotateIngestEndpointCredentials responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::rotateIngestEndpointCredentials
 */

/*!
 * Constructs a RotateIngestEndpointCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
RotateIngestEndpointCredentialsResponse::RotateIngestEndpointCredentialsResponse(
        const RotateIngestEndpointCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new RotateIngestEndpointCredentialsResponsePrivate(this), parent)
{
    setRequest(new RotateIngestEndpointCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RotateIngestEndpointCredentialsRequest * RotateIngestEndpointCredentialsResponse::request() const
{
    Q_D(const RotateIngestEndpointCredentialsResponse);
    return static_cast<const RotateIngestEndpointCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage RotateIngestEndpointCredentials \a response.
 */
void RotateIngestEndpointCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RotateIngestEndpointCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsResponsePrivate
 * \brief The RotateIngestEndpointCredentialsResponsePrivate class provides private implementation for RotateIngestEndpointCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a RotateIngestEndpointCredentialsResponsePrivate object with public implementation \a q.
 */
RotateIngestEndpointCredentialsResponsePrivate::RotateIngestEndpointCredentialsResponsePrivate(
    RotateIngestEndpointCredentialsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage RotateIngestEndpointCredentials response element from \a xml.
 */
void RotateIngestEndpointCredentialsResponsePrivate::parseRotateIngestEndpointCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateIngestEndpointCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
