// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableawsorganizationsaccessresponse.h"
#include "enableawsorganizationsaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::EnableAWSOrganizationsAccessResponse
 * \brief The EnableAWSOrganizationsAccessResponse class provides an interace for ServiceCatalog EnableAWSOrganizationsAccess responses.
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
 * \sa ServiceCatalogClient::enableAWSOrganizationsAccess
 */

/*!
 * Constructs a EnableAWSOrganizationsAccessResponse object for \a reply to \a request, with parent \a parent.
 */
EnableAWSOrganizationsAccessResponse::EnableAWSOrganizationsAccessResponse(
        const EnableAWSOrganizationsAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new EnableAWSOrganizationsAccessResponsePrivate(this), parent)
{
    setRequest(new EnableAWSOrganizationsAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableAWSOrganizationsAccessRequest * EnableAWSOrganizationsAccessResponse::request() const
{
    Q_D(const EnableAWSOrganizationsAccessResponse);
    return static_cast<const EnableAWSOrganizationsAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog EnableAWSOrganizationsAccess \a response.
 */
void EnableAWSOrganizationsAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableAWSOrganizationsAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::EnableAWSOrganizationsAccessResponsePrivate
 * \brief The EnableAWSOrganizationsAccessResponsePrivate class provides private implementation for EnableAWSOrganizationsAccessResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a EnableAWSOrganizationsAccessResponsePrivate object with public implementation \a q.
 */
EnableAWSOrganizationsAccessResponsePrivate::EnableAWSOrganizationsAccessResponsePrivate(
    EnableAWSOrganizationsAccessResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog EnableAWSOrganizationsAccess response element from \a xml.
 */
void EnableAWSOrganizationsAccessResponsePrivate::parseEnableAWSOrganizationsAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAWSOrganizationsAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
