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

#include "getawsorganizationsaccessstatusresponse.h"
#include "getawsorganizationsaccessstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::GetAWSOrganizationsAccessStatusResponse
 * \brief The GetAWSOrganizationsAccessStatusResponse class provides an interace for ServiceCatalog GetAWSOrganizationsAccessStatus responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::getAWSOrganizationsAccessStatus
 */

/*!
 * Constructs a GetAWSOrganizationsAccessStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetAWSOrganizationsAccessStatusResponse::GetAWSOrganizationsAccessStatusResponse(
        const GetAWSOrganizationsAccessStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new GetAWSOrganizationsAccessStatusResponsePrivate(this), parent)
{
    setRequest(new GetAWSOrganizationsAccessStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAWSOrganizationsAccessStatusRequest * GetAWSOrganizationsAccessStatusResponse::request() const
{
    Q_D(const GetAWSOrganizationsAccessStatusResponse);
    return static_cast<const GetAWSOrganizationsAccessStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog GetAWSOrganizationsAccessStatus \a response.
 */
void GetAWSOrganizationsAccessStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAWSOrganizationsAccessStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::GetAWSOrganizationsAccessStatusResponsePrivate
 * \brief The GetAWSOrganizationsAccessStatusResponsePrivate class provides private implementation for GetAWSOrganizationsAccessStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a GetAWSOrganizationsAccessStatusResponsePrivate object with public implementation \a q.
 */
GetAWSOrganizationsAccessStatusResponsePrivate::GetAWSOrganizationsAccessStatusResponsePrivate(
    GetAWSOrganizationsAccessStatusResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog GetAWSOrganizationsAccessStatus response element from \a xml.
 */
void GetAWSOrganizationsAccessStatusResponsePrivate::parseGetAWSOrganizationsAccessStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAWSOrganizationsAccessStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
