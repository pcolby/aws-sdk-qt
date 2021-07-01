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

#include "restoreanalysisresponse.h"
#include "restoreanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::RestoreAnalysisResponse
 * \brief The RestoreAnalysisResponse class provides an interace for QuickSight RestoreAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::restoreAnalysis
 */

/*!
 * Constructs a RestoreAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreAnalysisResponse::RestoreAnalysisResponse(
        const RestoreAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new RestoreAnalysisResponsePrivate(this), parent)
{
    setRequest(new RestoreAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreAnalysisRequest * RestoreAnalysisResponse::request() const
{
    Q_D(const RestoreAnalysisResponse);
    return static_cast<const RestoreAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight RestoreAnalysis \a response.
 */
void RestoreAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::RestoreAnalysisResponsePrivate
 * \brief The RestoreAnalysisResponsePrivate class provides private implementation for RestoreAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a RestoreAnalysisResponsePrivate object with public implementation \a q.
 */
RestoreAnalysisResponsePrivate::RestoreAnalysisResponsePrivate(
    RestoreAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight RestoreAnalysis response element from \a xml.
 */
void RestoreAnalysisResponsePrivate::parseRestoreAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
