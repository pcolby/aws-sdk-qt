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

#include "cancelqueryresponse.h"
#include "cancelqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::CancelQueryResponse
 * \brief The CancelQueryResponse class provides an interace for TimestreamQuery CancelQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *
 * \sa TimestreamQueryClient::cancelQuery
 */

/*!
 * Constructs a CancelQueryResponse object for \a reply to \a request, with parent \a parent.
 */
CancelQueryResponse::CancelQueryResponse(
        const CancelQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new CancelQueryResponsePrivate(this), parent)
{
    setRequest(new CancelQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelQueryRequest * CancelQueryResponse::request() const
{
    Q_D(const CancelQueryResponse);
    return static_cast<const CancelQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery CancelQuery \a response.
 */
void CancelQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::CancelQueryResponsePrivate
 * \brief The CancelQueryResponsePrivate class provides private implementation for CancelQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a CancelQueryResponsePrivate object with public implementation \a q.
 */
CancelQueryResponsePrivate::CancelQueryResponsePrivate(
    CancelQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery CancelQuery response element from \a xml.
 */
void CancelQueryResponsePrivate::parseCancelQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
