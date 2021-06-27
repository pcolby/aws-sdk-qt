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

#include "associateresourceresponse.h"
#include "associateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::AssociateResourceResponse
 * \brief The AssociateResourceResponse class provides an interace for AppRegistry AssociateResource responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::associateResource
 */

/*!
 * Constructs a AssociateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceResponse::AssociateResourceResponse(
        const AssociateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new AssociateResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceRequest * AssociateResourceResponse::request() const
{
    return static_cast<const AssociateResourceRequest *>(AppRegistryResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppRegistry AssociateResource \a response.
 */
void AssociateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::AssociateResourceResponsePrivate
 * \brief The AssociateResourceResponsePrivate class provides private implementation for AssociateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a AssociateResourceResponsePrivate object with public implementation \a q.
 */
AssociateResourceResponsePrivate::AssociateResourceResponsePrivate(
    AssociateResourceResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry AssociateResource response element from \a xml.
 */
void AssociateResourceResponsePrivate::parseAssociateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
