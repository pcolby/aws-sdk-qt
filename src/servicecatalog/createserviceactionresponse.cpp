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

#include "createserviceactionresponse.h"
#include "createserviceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateServiceActionResponse
 * \brief The CreateServiceActionResponse class provides an interace for ServiceCatalog CreateServiceAction responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::createServiceAction
 */

/*!
 * Constructs a CreateServiceActionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServiceActionResponse::CreateServiceActionResponse(
        const CreateServiceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateServiceActionResponsePrivate(this), parent)
{
    setRequest(new CreateServiceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServiceActionRequest * CreateServiceActionResponse::request() const
{
    return static_cast<const CreateServiceActionRequest *>(ServiceCatalogResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreateServiceAction \a response.
 */
void CreateServiceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServiceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreateServiceActionResponsePrivate
 * \brief The CreateServiceActionResponsePrivate class provides private implementation for CreateServiceActionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateServiceActionResponsePrivate object with public implementation \a q.
 */
CreateServiceActionResponsePrivate::CreateServiceActionResponsePrivate(
    CreateServiceActionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreateServiceAction response element from \a xml.
 */
void CreateServiceActionResponsePrivate::parseCreateServiceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
