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

#include "deleteattributegroupresponse.h"
#include "deleteattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::DeleteAttributeGroupResponse
 * \brief The DeleteAttributeGroupResponse class provides an interace for AppRegistry DeleteAttributeGroup responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::deleteAttributeGroup
 */

/*!
 * Constructs a DeleteAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAttributeGroupResponse::DeleteAttributeGroupResponse(
        const DeleteAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new DeleteAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAttributeGroupRequest * DeleteAttributeGroupResponse::request() const
{
    return static_cast<const DeleteAttributeGroupRequest *>(AppRegistryResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppRegistry DeleteAttributeGroup \a response.
 */
void DeleteAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::DeleteAttributeGroupResponsePrivate
 * \brief The DeleteAttributeGroupResponsePrivate class provides private implementation for DeleteAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a DeleteAttributeGroupResponsePrivate object with public implementation \a q.
 */
DeleteAttributeGroupResponsePrivate::DeleteAttributeGroupResponsePrivate(
    DeleteAttributeGroupResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry DeleteAttributeGroup response element from \a xml.
 */
void DeleteAttributeGroupResponsePrivate::parseDeleteAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
