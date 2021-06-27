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

#include "createoriginendpointresponse.h"
#include "createoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointResponse
 * \brief The CreateOriginEndpointResponse class provides an interace for MediaPackage CreateOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createOriginEndpoint
 */

/*!
 * Constructs a CreateOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOriginEndpointResponse::CreateOriginEndpointResponse(
        const CreateOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new CreateOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOriginEndpointRequest * CreateOriginEndpointResponse::request() const
{
    return static_cast<const CreateOriginEndpointRequest *>(MediaPackageResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackage CreateOriginEndpoint \a response.
 */
void CreateOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::CreateOriginEndpointResponsePrivate
 * \brief The CreateOriginEndpointResponsePrivate class provides private implementation for CreateOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateOriginEndpointResponsePrivate object with public implementation \a q.
 */
CreateOriginEndpointResponsePrivate::CreateOriginEndpointResponsePrivate(
    CreateOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage CreateOriginEndpoint response element from \a xml.
 */
void CreateOriginEndpointResponsePrivate::parseCreateOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
