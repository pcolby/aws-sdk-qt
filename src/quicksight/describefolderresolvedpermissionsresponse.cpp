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

#include "describefolderresolvedpermissionsresponse.h"
#include "describefolderresolvedpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsResponse
 * \brief The DescribeFolderResolvedPermissionsResponse class provides an interace for QuickSight DescribeFolderResolvedPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderResolvedPermissions
 */

/*!
 * Constructs a DescribeFolderResolvedPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFolderResolvedPermissionsResponse::DescribeFolderResolvedPermissionsResponse(
        const DescribeFolderResolvedPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeFolderResolvedPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeFolderResolvedPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFolderResolvedPermissionsRequest * DescribeFolderResolvedPermissionsResponse::request() const
{
    Q_D(const DescribeFolderResolvedPermissionsResponse);
    return static_cast<const DescribeFolderResolvedPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeFolderResolvedPermissions \a response.
 */
void DescribeFolderResolvedPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFolderResolvedPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsResponsePrivate
 * \brief The DescribeFolderResolvedPermissionsResponsePrivate class provides private implementation for DescribeFolderResolvedPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderResolvedPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeFolderResolvedPermissionsResponsePrivate::DescribeFolderResolvedPermissionsResponsePrivate(
    DescribeFolderResolvedPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeFolderResolvedPermissions response element from \a xml.
 */
void DescribeFolderResolvedPermissionsResponsePrivate::parseDescribeFolderResolvedPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFolderResolvedPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
