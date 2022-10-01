// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
