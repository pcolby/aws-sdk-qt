// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatebudgetfromresourceresponse.h"
#include "disassociatebudgetfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceResponse
 * \brief The DisassociateBudgetFromResourceResponse class provides an interace for ServiceCatalog DisassociateBudgetFromResource responses.
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
 * \sa ServiceCatalogClient::disassociateBudgetFromResource
 */

/*!
 * Constructs a DisassociateBudgetFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateBudgetFromResourceResponse::DisassociateBudgetFromResourceResponse(
        const DisassociateBudgetFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateBudgetFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateBudgetFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateBudgetFromResourceRequest * DisassociateBudgetFromResourceResponse::request() const
{
    Q_D(const DisassociateBudgetFromResourceResponse);
    return static_cast<const DisassociateBudgetFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateBudgetFromResource \a response.
 */
void DisassociateBudgetFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateBudgetFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceResponsePrivate
 * \brief The DisassociateBudgetFromResourceResponsePrivate class provides private implementation for DisassociateBudgetFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateBudgetFromResourceResponsePrivate object with public implementation \a q.
 */
DisassociateBudgetFromResourceResponsePrivate::DisassociateBudgetFromResourceResponsePrivate(
    DisassociateBudgetFromResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateBudgetFromResource response element from \a xml.
 */
void DisassociateBudgetFromResourceResponsePrivate::parseDisassociateBudgetFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateBudgetFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
