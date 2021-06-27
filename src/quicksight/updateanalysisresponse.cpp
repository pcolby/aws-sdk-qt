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

#include "updateanalysisresponse.h"
#include "updateanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAnalysisResponse
 * \brief The UpdateAnalysisResponse class provides an interace for QuickSight UpdateAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAnalysis
 */

/*!
 * Constructs a UpdateAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnalysisResponse::UpdateAnalysisResponse(
        const UpdateAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateAnalysisResponsePrivate(this), parent)
{
    setRequest(new UpdateAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnalysisRequest * UpdateAnalysisResponse::request() const
{
    return static_cast<const UpdateAnalysisRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateAnalysis \a response.
 */
void UpdateAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateAnalysisResponsePrivate
 * \brief The UpdateAnalysisResponsePrivate class provides private implementation for UpdateAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAnalysisResponsePrivate object with public implementation \a q.
 */
UpdateAnalysisResponsePrivate::UpdateAnalysisResponsePrivate(
    UpdateAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateAnalysis response element from \a xml.
 */
void UpdateAnalysisResponsePrivate::parseUpdateAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
