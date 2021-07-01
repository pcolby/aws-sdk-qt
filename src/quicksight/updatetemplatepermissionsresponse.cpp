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

#include "updatetemplatepermissionsresponse.h"
#include "updatetemplatepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsResponse
 * \brief The UpdateTemplatePermissionsResponse class provides an interace for QuickSight UpdateTemplatePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplatePermissions
 */

/*!
 * Constructs a UpdateTemplatePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTemplatePermissionsResponse::UpdateTemplatePermissionsResponse(
        const UpdateTemplatePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateTemplatePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateTemplatePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTemplatePermissionsRequest * UpdateTemplatePermissionsResponse::request() const
{
    Q_D(const UpdateTemplatePermissionsResponse);
    return static_cast<const UpdateTemplatePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateTemplatePermissions \a response.
 */
void UpdateTemplatePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTemplatePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsResponsePrivate
 * \brief The UpdateTemplatePermissionsResponsePrivate class provides private implementation for UpdateTemplatePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplatePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateTemplatePermissionsResponsePrivate::UpdateTemplatePermissionsResponsePrivate(
    UpdateTemplatePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateTemplatePermissions response element from \a xml.
 */
void UpdateTemplatePermissionsResponsePrivate::parseUpdateTemplatePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTemplatePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
