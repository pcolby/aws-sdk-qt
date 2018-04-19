/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdevendpointresponse.h"
#include "getdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointResponse
 * \brief The GetDevEndpointResponse class provides an interace for Glue GetDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDevEndpoint
 */

/*!
 * Constructs a GetDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevEndpointResponse::GetDevEndpointResponse(
        const GetDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevEndpointRequest * GetDevEndpointResponse::request() const
{
    Q_D(const GetDevEndpointResponse);
    return static_cast<const GetDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDevEndpoint \a response.
 */
void GetDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDevEndpointResponsePrivate
 * \brief The GetDevEndpointResponsePrivate class provides private implementation for GetDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointResponsePrivate object with public implementation \a q.
 */
GetDevEndpointResponsePrivate::GetDevEndpointResponsePrivate(
    GetDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDevEndpoint response element from \a xml.
 */
void GetDevEndpointResponsePrivate::parseGetDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
