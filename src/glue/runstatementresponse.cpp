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

#include "runstatementresponse.h"
#include "runstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RunStatementResponse
 * \brief The RunStatementResponse class provides an interace for Glue RunStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::runStatement
 */

/*!
 * Constructs a RunStatementResponse object for \a reply to \a request, with parent \a parent.
 */
RunStatementResponse::RunStatementResponse(
        const RunStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new RunStatementResponsePrivate(this), parent)
{
    setRequest(new RunStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunStatementRequest * RunStatementResponse::request() const
{
    Q_D(const RunStatementResponse);
    return static_cast<const RunStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue RunStatement \a response.
 */
void RunStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::RunStatementResponsePrivate
 * \brief The RunStatementResponsePrivate class provides private implementation for RunStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RunStatementResponsePrivate object with public implementation \a q.
 */
RunStatementResponsePrivate::RunStatementResponsePrivate(
    RunStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue RunStatement response element from \a xml.
 */
void RunStatementResponsePrivate::parseRunStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
