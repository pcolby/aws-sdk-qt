/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteservicelinkedroleresponse.h"
#include "deleteservicelinkedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteServiceLinkedRoleResponse
 * \brief The DeleteServiceLinkedRoleResponse class provides an interace for CloudFront DeleteServiceLinkedRole responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteServiceLinkedRole
 */

/*!
 * Constructs a DeleteServiceLinkedRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceLinkedRoleResponse::DeleteServiceLinkedRoleResponse(
        const DeleteServiceLinkedRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteServiceLinkedRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceLinkedRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceLinkedRoleRequest * DeleteServiceLinkedRoleResponse::request() const
{
    Q_D(const DeleteServiceLinkedRoleResponse);
    return static_cast<const DeleteServiceLinkedRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteServiceLinkedRole \a response.
 */
void DeleteServiceLinkedRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteServiceLinkedRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteServiceLinkedRoleResponsePrivate
 * \brief The DeleteServiceLinkedRoleResponsePrivate class provides private implementation for DeleteServiceLinkedRoleResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteServiceLinkedRoleResponsePrivate object with public implementation \a q.
 */
DeleteServiceLinkedRoleResponsePrivate::DeleteServiceLinkedRoleResponsePrivate(
    DeleteServiceLinkedRoleResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteServiceLinkedRole response element from \a xml.
 */
void DeleteServiceLinkedRoleResponsePrivate::parseDeleteServiceLinkedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceLinkedRoleResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
