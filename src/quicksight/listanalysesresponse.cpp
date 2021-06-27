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

#include "listanalysesresponse.h"
#include "listanalysesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListAnalysesResponse
 * \brief The ListAnalysesResponse class provides an interace for QuickSight ListAnalyses responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listAnalyses
 */

/*!
 * Constructs a ListAnalysesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnalysesResponse::ListAnalysesResponse(
        const ListAnalysesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new ListAnalysesResponsePrivate(this), parent)
{
    setRequest(new ListAnalysesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnalysesRequest * ListAnalysesResponse::request() const
{
    return static_cast<const ListAnalysesRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight ListAnalyses \a response.
 */
void ListAnalysesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnalysesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::ListAnalysesResponsePrivate
 * \brief The ListAnalysesResponsePrivate class provides private implementation for ListAnalysesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListAnalysesResponsePrivate object with public implementation \a q.
 */
ListAnalysesResponsePrivate::ListAnalysesResponsePrivate(
    ListAnalysesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight ListAnalyses response element from \a xml.
 */
void ListAnalysesResponsePrivate::parseListAnalysesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnalysesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
