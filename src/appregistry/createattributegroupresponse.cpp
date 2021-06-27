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

#include "createattributegroupresponse.h"
#include "createattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::CreateAttributeGroupResponse
 * \brief The CreateAttributeGroupResponse class provides an interace for AppRegistry CreateAttributeGroup responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::createAttributeGroup
 */

/*!
 * Constructs a CreateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAttributeGroupResponse::CreateAttributeGroupResponse(
        const CreateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new CreateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new CreateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAttributeGroupRequest * CreateAttributeGroupResponse::request() const
{
    return static_cast<const CreateAttributeGroupRequest *>(AppRegistryResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppRegistry CreateAttributeGroup \a response.
 */
void CreateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::CreateAttributeGroupResponsePrivate
 * \brief The CreateAttributeGroupResponsePrivate class provides private implementation for CreateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a CreateAttributeGroupResponsePrivate object with public implementation \a q.
 */
CreateAttributeGroupResponsePrivate::CreateAttributeGroupResponsePrivate(
    CreateAttributeGroupResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry CreateAttributeGroup response element from \a xml.
 */
void CreateAttributeGroupResponsePrivate::parseCreateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
