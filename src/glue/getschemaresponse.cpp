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

#include "getschemaresponse.h"
#include "getschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaResponse
 * \brief The GetSchemaResponse class provides an interace for Glue GetSchema responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSchema
 */

/*!
 * Constructs a GetSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaResponse::GetSchemaResponse(
        const GetSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaResponsePrivate(this), parent)
{
    setRequest(new GetSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaRequest * GetSchemaResponse::request() const
{
    Q_D(const GetSchemaResponse);
    return static_cast<const GetSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchema \a response.
 */
void GetSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaResponsePrivate
 * \brief The GetSchemaResponsePrivate class provides private implementation for GetSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaResponsePrivate object with public implementation \a q.
 */
GetSchemaResponsePrivate::GetSchemaResponsePrivate(
    GetSchemaResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchema response element from \a xml.
 */
void GetSchemaResponsePrivate::parseGetSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
