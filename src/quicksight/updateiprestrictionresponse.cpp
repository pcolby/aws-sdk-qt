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

#include "updateiprestrictionresponse.h"
#include "updateiprestrictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionResponse
 * \brief The UpdateIpRestrictionResponse class provides an interace for QuickSight UpdateIpRestriction responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIpRestriction
 */

/*!
 * Constructs a UpdateIpRestrictionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIpRestrictionResponse::UpdateIpRestrictionResponse(
        const UpdateIpRestrictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateIpRestrictionResponsePrivate(this), parent)
{
    setRequest(new UpdateIpRestrictionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIpRestrictionRequest * UpdateIpRestrictionResponse::request() const
{
    Q_D(const UpdateIpRestrictionResponse);
    return static_cast<const UpdateIpRestrictionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateIpRestriction \a response.
 */
void UpdateIpRestrictionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIpRestrictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionResponsePrivate
 * \brief The UpdateIpRestrictionResponsePrivate class provides private implementation for UpdateIpRestrictionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIpRestrictionResponsePrivate object with public implementation \a q.
 */
UpdateIpRestrictionResponsePrivate::UpdateIpRestrictionResponsePrivate(
    UpdateIpRestrictionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateIpRestriction response element from \a xml.
 */
void UpdateIpRestrictionResponsePrivate::parseUpdateIpRestrictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIpRestrictionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
