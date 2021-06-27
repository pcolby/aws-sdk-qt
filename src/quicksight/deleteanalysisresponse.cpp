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

#include "deleteanalysisresponse.h"
#include "deleteanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAnalysisResponse
 * \brief The DeleteAnalysisResponse class provides an interace for QuickSight DeleteAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAnalysis
 */

/*!
 * Constructs a DeleteAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnalysisResponse::DeleteAnalysisResponse(
        const DeleteAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteAnalysisResponsePrivate(this), parent)
{
    setRequest(new DeleteAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnalysisRequest * DeleteAnalysisResponse::request() const
{
    return static_cast<const DeleteAnalysisRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteAnalysis \a response.
 */
void DeleteAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteAnalysisResponsePrivate
 * \brief The DeleteAnalysisResponsePrivate class provides private implementation for DeleteAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAnalysisResponsePrivate object with public implementation \a q.
 */
DeleteAnalysisResponsePrivate::DeleteAnalysisResponsePrivate(
    DeleteAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteAnalysis response element from \a xml.
 */
void DeleteAnalysisResponsePrivate::parseDeleteAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
