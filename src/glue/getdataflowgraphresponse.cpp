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

#include "getdataflowgraphresponse.h"
#include "getdataflowgraphresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataflowGraphResponse
 * \brief The GetDataflowGraphResponse class provides an interace for Glue GetDataflowGraph responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDataflowGraph
 */

/*!
 * Constructs a GetDataflowGraphResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataflowGraphResponse::GetDataflowGraphResponse(
        const GetDataflowGraphRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDataflowGraphResponsePrivate(this), parent)
{
    setRequest(new GetDataflowGraphRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataflowGraphRequest * GetDataflowGraphResponse::request() const
{
    Q_D(const GetDataflowGraphResponse);
    return static_cast<const GetDataflowGraphRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDataflowGraph \a response.
 */
void GetDataflowGraphResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataflowGraphResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDataflowGraphResponsePrivate
 * \brief The GetDataflowGraphResponsePrivate class provides private implementation for GetDataflowGraphResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDataflowGraphResponsePrivate object with public implementation \a q.
 */
GetDataflowGraphResponsePrivate::GetDataflowGraphResponsePrivate(
    GetDataflowGraphResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDataflowGraph response element from \a xml.
 */
void GetDataflowGraphResponsePrivate::parseGetDataflowGraphResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataflowGraphResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
