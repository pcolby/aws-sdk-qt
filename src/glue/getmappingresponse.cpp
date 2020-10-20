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

#include "getmappingresponse.h"
#include "getmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMappingResponse
 * \brief The GetMappingResponse class provides an interace for Glue GetMapping responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMapping
 */

/*!
 * Constructs a GetMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetMappingResponse::GetMappingResponse(
        const GetMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMappingResponsePrivate(this), parent)
{
    setRequest(new GetMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMappingRequest * GetMappingResponse::request() const
{
    Q_D(const GetMappingResponse);
    return static_cast<const GetMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMapping \a response.
 */
void GetMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMappingResponsePrivate
 * \brief The GetMappingResponsePrivate class provides private implementation for GetMappingResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMappingResponsePrivate object with public implementation \a q.
 */
GetMappingResponsePrivate::GetMappingResponsePrivate(
    GetMappingResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMapping response element from \a xml.
 */
void GetMappingResponsePrivate::parseGetMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
