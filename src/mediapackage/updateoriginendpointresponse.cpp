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

#include "updateoriginendpointresponse.h"
#include "updateoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::UpdateOriginEndpointResponse
 * \brief The UpdateOriginEndpointResponse class provides an interace for MediaPackage UpdateOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::updateOriginEndpoint
 */

/*!
 * Constructs a UpdateOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOriginEndpointResponse::UpdateOriginEndpointResponse(
        const UpdateOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new UpdateOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOriginEndpointRequest * UpdateOriginEndpointResponse::request() const
{
    Q_D(const UpdateOriginEndpointResponse);
    return static_cast<const UpdateOriginEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage UpdateOriginEndpoint \a response.
 */
void UpdateOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::UpdateOriginEndpointResponsePrivate
 * \brief The UpdateOriginEndpointResponsePrivate class provides private implementation for UpdateOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a UpdateOriginEndpointResponsePrivate object with public implementation \a q.
 */
UpdateOriginEndpointResponsePrivate::UpdateOriginEndpointResponsePrivate(
    UpdateOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage UpdateOriginEndpoint response element from \a xml.
 */
void UpdateOriginEndpointResponsePrivate::parseUpdateOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
