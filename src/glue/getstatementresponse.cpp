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

#include "getstatementresponse.h"
#include "getstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetStatementResponse
 * \brief The GetStatementResponse class provides an interace for Glue GetStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getStatement
 */

/*!
 * Constructs a GetStatementResponse object for \a reply to \a request, with parent \a parent.
 */
GetStatementResponse::GetStatementResponse(
        const GetStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetStatementResponsePrivate(this), parent)
{
    setRequest(new GetStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStatementRequest * GetStatementResponse::request() const
{
    Q_D(const GetStatementResponse);
    return static_cast<const GetStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetStatement \a response.
 */
void GetStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetStatementResponsePrivate
 * \brief The GetStatementResponsePrivate class provides private implementation for GetStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetStatementResponsePrivate object with public implementation \a q.
 */
GetStatementResponsePrivate::GetStatementResponsePrivate(
    GetStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetStatement response element from \a xml.
 */
void GetStatementResponsePrivate::parseGetStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
