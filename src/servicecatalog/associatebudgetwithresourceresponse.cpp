// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatebudgetwithresourceresponse.h"
#include "associatebudgetwithresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceResponse
 * \brief The AssociateBudgetWithResourceResponse class provides an interace for ServiceCatalog AssociateBudgetWithResource responses.
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
 * \sa ServiceCatalogClient::associateBudgetWithResource
 */

/*!
 * Constructs a AssociateBudgetWithResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateBudgetWithResourceResponse::AssociateBudgetWithResourceResponse(
        const AssociateBudgetWithResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateBudgetWithResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateBudgetWithResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateBudgetWithResourceRequest * AssociateBudgetWithResourceResponse::request() const
{
    Q_D(const AssociateBudgetWithResourceResponse);
    return static_cast<const AssociateBudgetWithResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociateBudgetWithResource \a response.
 */
void AssociateBudgetWithResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateBudgetWithResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceResponsePrivate
 * \brief The AssociateBudgetWithResourceResponsePrivate class provides private implementation for AssociateBudgetWithResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateBudgetWithResourceResponsePrivate object with public implementation \a q.
 */
AssociateBudgetWithResourceResponsePrivate::AssociateBudgetWithResourceResponsePrivate(
    AssociateBudgetWithResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociateBudgetWithResource response element from \a xml.
 */
void AssociateBudgetWithResourceResponsePrivate::parseAssociateBudgetWithResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateBudgetWithResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
