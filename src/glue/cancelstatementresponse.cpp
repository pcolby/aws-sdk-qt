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

#include "cancelstatementresponse.h"
#include "cancelstatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelStatementResponse
 * \brief The CancelStatementResponse class provides an interace for Glue CancelStatement responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::cancelStatement
 */

/*!
 * Constructs a CancelStatementResponse object for \a reply to \a request, with parent \a parent.
 */
CancelStatementResponse::CancelStatementResponse(
        const CancelStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CancelStatementResponsePrivate(this), parent)
{
    setRequest(new CancelStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelStatementRequest * CancelStatementResponse::request() const
{
    Q_D(const CancelStatementResponse);
    return static_cast<const CancelStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CancelStatement \a response.
 */
void CancelStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CancelStatementResponsePrivate
 * \brief The CancelStatementResponsePrivate class provides private implementation for CancelStatementResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelStatementResponsePrivate object with public implementation \a q.
 */
CancelStatementResponsePrivate::CancelStatementResponsePrivate(
    CancelStatementResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CancelStatement response element from \a xml.
 */
void CancelStatementResponsePrivate::parseCancelStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
