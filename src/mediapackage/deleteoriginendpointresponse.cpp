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

#include "deleteoriginendpointresponse.h"
#include "deleteoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointResponse
 * \brief The DeleteOriginEndpointResponse class provides an interace for MediaPackage DeleteOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::deleteOriginEndpoint
 */

/*!
 * Constructs a DeleteOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOriginEndpointResponse::DeleteOriginEndpointResponse(
        const DeleteOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DeleteOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOriginEndpointRequest * DeleteOriginEndpointResponse::request() const
{
    return static_cast<const DeleteOriginEndpointRequest *>(MediaPackageResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackage DeleteOriginEndpoint \a response.
 */
void DeleteOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointResponsePrivate
 * \brief The DeleteOriginEndpointResponsePrivate class provides private implementation for DeleteOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DeleteOriginEndpointResponsePrivate object with public implementation \a q.
 */
DeleteOriginEndpointResponsePrivate::DeleteOriginEndpointResponsePrivate(
    DeleteOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DeleteOriginEndpoint response element from \a xml.
 */
void DeleteOriginEndpointResponsePrivate::parseDeleteOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
