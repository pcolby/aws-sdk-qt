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

#include "deletedevendpointresponse.h"
#include "deletedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDevEndpointResponse
 * \brief The DeleteDevEndpointResponse class provides an interace for Glue DeleteDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteDevEndpoint
 */

/*!
 * Constructs a DeleteDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDevEndpointResponse::DeleteDevEndpointResponse(
        const DeleteDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDevEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDevEndpointRequest * DeleteDevEndpointResponse::request() const
{
    Q_D(const DeleteDevEndpointResponse);
    return static_cast<const DeleteDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteDevEndpoint \a response.
 */
void DeleteDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteDevEndpointResponsePrivate
 * \brief The DeleteDevEndpointResponsePrivate class provides private implementation for DeleteDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteDevEndpointResponsePrivate object with public implementation \a q.
 */
DeleteDevEndpointResponsePrivate::DeleteDevEndpointResponsePrivate(
    DeleteDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteDevEndpoint response element from \a xml.
 */
void DeleteDevEndpointResponsePrivate::parseDeleteDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
