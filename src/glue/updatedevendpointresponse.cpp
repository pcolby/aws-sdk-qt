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

#include "updatedevendpointresponse.h"
#include "updatedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDevEndpointResponse
 * \brief The UpdateDevEndpointResponse class provides an interace for Glue UpdateDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateDevEndpoint
 */

/*!
 * Constructs a UpdateDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevEndpointResponse::UpdateDevEndpointResponse(
        const UpdateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevEndpointRequest * UpdateDevEndpointResponse::request() const
{
    Q_D(const UpdateDevEndpointResponse);
    return static_cast<const UpdateDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateDevEndpoint \a response.
 */
void UpdateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateDevEndpointResponsePrivate
 * \brief The UpdateDevEndpointResponsePrivate class provides private implementation for UpdateDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDevEndpointResponsePrivate object with public implementation \a q.
 */
UpdateDevEndpointResponsePrivate::UpdateDevEndpointResponsePrivate(
    UpdateDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateDevEndpoint response element from \a xml.
 */
void UpdateDevEndpointResponsePrivate::parseUpdateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
