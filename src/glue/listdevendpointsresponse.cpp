/*
    Copyright 2013-2020 Paul Colby

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

#include "listdevendpointsresponse.h"
#include "listdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListDevEndpointsResponse
 * \brief The ListDevEndpointsResponse class provides an interace for Glue ListDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listDevEndpoints
 */

/*!
 * Constructs a ListDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevEndpointsResponse::ListDevEndpointsResponse(
        const ListDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevEndpointsRequest * ListDevEndpointsResponse::request() const
{
    Q_D(const ListDevEndpointsResponse);
    return static_cast<const ListDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListDevEndpoints \a response.
 */
void ListDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListDevEndpointsResponsePrivate
 * \brief The ListDevEndpointsResponsePrivate class provides private implementation for ListDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListDevEndpointsResponsePrivate object with public implementation \a q.
 */
ListDevEndpointsResponsePrivate::ListDevEndpointsResponsePrivate(
    ListDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListDevEndpoints response element from \a xml.
 */
void ListDevEndpointsResponsePrivate::parseListDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
