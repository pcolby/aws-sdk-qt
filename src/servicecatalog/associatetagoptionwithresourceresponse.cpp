// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetagoptionwithresourceresponse.h"
#include "associatetagoptionwithresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceResponse
 * \brief The AssociateTagOptionWithResourceResponse class provides an interace for ServiceCatalog AssociateTagOptionWithResource responses.
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
 * \sa ServiceCatalogClient::associateTagOptionWithResource
 */

/*!
 * Constructs a AssociateTagOptionWithResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateTagOptionWithResourceResponse::AssociateTagOptionWithResourceResponse(
        const AssociateTagOptionWithResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateTagOptionWithResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateTagOptionWithResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateTagOptionWithResourceRequest * AssociateTagOptionWithResourceResponse::request() const
{
    Q_D(const AssociateTagOptionWithResourceResponse);
    return static_cast<const AssociateTagOptionWithResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociateTagOptionWithResource \a response.
 */
void AssociateTagOptionWithResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateTagOptionWithResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceResponsePrivate
 * \brief The AssociateTagOptionWithResourceResponsePrivate class provides private implementation for AssociateTagOptionWithResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateTagOptionWithResourceResponsePrivate object with public implementation \a q.
 */
AssociateTagOptionWithResourceResponsePrivate::AssociateTagOptionWithResourceResponsePrivate(
    AssociateTagOptionWithResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociateTagOptionWithResource response element from \a xml.
 */
void AssociateTagOptionWithResourceResponsePrivate::parseAssociateTagOptionWithResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTagOptionWithResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
