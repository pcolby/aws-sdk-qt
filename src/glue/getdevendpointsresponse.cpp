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

#include "getdevendpointsresponse.h"
#include "getdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointsResponse
 * \brief The GetDevEndpointsResponse class provides an interace for Glue GetDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDevEndpoints
 */

/*!
 * Constructs a GetDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevEndpointsResponse::GetDevEndpointsResponse(
        const GetDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevEndpointsRequest * GetDevEndpointsResponse::request() const
{
    Q_D(const GetDevEndpointsResponse);
    return static_cast<const GetDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDevEndpoints \a response.
 */
void GetDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDevEndpointsResponsePrivate
 * \brief The GetDevEndpointsResponsePrivate class provides private implementation for GetDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointsResponsePrivate object with public implementation \a q.
 */
GetDevEndpointsResponsePrivate::GetDevEndpointsResponsePrivate(
    GetDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDevEndpoints response element from \a xml.
 */
void GetDevEndpointsResponsePrivate::parseGetDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
