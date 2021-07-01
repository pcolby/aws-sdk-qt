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

#include "updateanalysispermissionsresponse.h"
#include "updateanalysispermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAnalysisPermissionsResponse
 * \brief The UpdateAnalysisPermissionsResponse class provides an interace for QuickSight UpdateAnalysisPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAnalysisPermissions
 */

/*!
 * Constructs a UpdateAnalysisPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnalysisPermissionsResponse::UpdateAnalysisPermissionsResponse(
        const UpdateAnalysisPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateAnalysisPermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateAnalysisPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnalysisPermissionsRequest * UpdateAnalysisPermissionsResponse::request() const
{
    Q_D(const UpdateAnalysisPermissionsResponse);
    return static_cast<const UpdateAnalysisPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateAnalysisPermissions \a response.
 */
void UpdateAnalysisPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnalysisPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateAnalysisPermissionsResponsePrivate
 * \brief The UpdateAnalysisPermissionsResponsePrivate class provides private implementation for UpdateAnalysisPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAnalysisPermissionsResponsePrivate object with public implementation \a q.
 */
UpdateAnalysisPermissionsResponsePrivate::UpdateAnalysisPermissionsResponsePrivate(
    UpdateAnalysisPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateAnalysisPermissions response element from \a xml.
 */
void UpdateAnalysisPermissionsResponsePrivate::parseUpdateAnalysisPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnalysisPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
