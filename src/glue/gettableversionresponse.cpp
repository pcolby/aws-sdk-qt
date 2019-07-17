/*
    Copyright 2013-2019 Paul Colby

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

#include "gettableversionresponse.h"
#include "gettableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionResponse
 * \brief The GetTableVersionResponse class provides an interace for Glue GetTableVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTableVersion
 */

/*!
 * Constructs a GetTableVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableVersionResponse::GetTableVersionResponse(
        const GetTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableVersionRequest * GetTableVersionResponse::request() const
{
    Q_D(const GetTableVersionResponse);
    return static_cast<const GetTableVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTableVersion \a response.
 */
void GetTableVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableVersionResponsePrivate
 * \brief The GetTableVersionResponsePrivate class provides private implementation for GetTableVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionResponsePrivate object with public implementation \a q.
 */
GetTableVersionResponsePrivate::GetTableVersionResponsePrivate(
    GetTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTableVersion response element from \a xml.
 */
void GetTableVersionResponsePrivate::parseGetTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
