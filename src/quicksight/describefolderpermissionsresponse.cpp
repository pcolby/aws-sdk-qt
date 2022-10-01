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

#include "describefolderpermissionsresponse.h"
#include "describefolderpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsResponse
 * \brief The DescribeFolderPermissionsResponse class provides an interace for QuickSight DescribeFolderPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderPermissions
 */

/*!
 * Constructs a DescribeFolderPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFolderPermissionsResponse::DescribeFolderPermissionsResponse(
        const DescribeFolderPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeFolderPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeFolderPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFolderPermissionsRequest * DescribeFolderPermissionsResponse::request() const
{
    Q_D(const DescribeFolderPermissionsResponse);
    return static_cast<const DescribeFolderPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeFolderPermissions \a response.
 */
void DescribeFolderPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFolderPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsResponsePrivate
 * \brief The DescribeFolderPermissionsResponsePrivate class provides private implementation for DescribeFolderPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeFolderPermissionsResponsePrivate::DescribeFolderPermissionsResponsePrivate(
    DescribeFolderPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeFolderPermissions response element from \a xml.
 */
void DescribeFolderPermissionsResponsePrivate::parseDescribeFolderPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFolderPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
