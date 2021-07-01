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

#include "describeconnectionaliaspermissionsresponse.h"
#include "describeconnectionaliaspermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasPermissionsResponse
 * \brief The DescribeConnectionAliasPermissionsResponse class provides an interace for WorkSpaces DescribeConnectionAliasPermissions responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeConnectionAliasPermissions
 */

/*!
 * Constructs a DescribeConnectionAliasPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionAliasPermissionsResponse::DescribeConnectionAliasPermissionsResponse(
        const DescribeConnectionAliasPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeConnectionAliasPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionAliasPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionAliasPermissionsRequest * DescribeConnectionAliasPermissionsResponse::request() const
{
    Q_D(const DescribeConnectionAliasPermissionsResponse);
    return static_cast<const DescribeConnectionAliasPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeConnectionAliasPermissions \a response.
 */
void DescribeConnectionAliasPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionAliasPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeConnectionAliasPermissionsResponsePrivate
 * \brief The DescribeConnectionAliasPermissionsResponsePrivate class provides private implementation for DescribeConnectionAliasPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeConnectionAliasPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeConnectionAliasPermissionsResponsePrivate::DescribeConnectionAliasPermissionsResponsePrivate(
    DescribeConnectionAliasPermissionsResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeConnectionAliasPermissions response element from \a xml.
 */
void DescribeConnectionAliasPermissionsResponsePrivate::parseDescribeConnectionAliasPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionAliasPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
