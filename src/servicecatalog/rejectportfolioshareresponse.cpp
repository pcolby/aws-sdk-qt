// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectportfolioshareresponse.h"
#include "rejectportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareResponse
 * \brief The RejectPortfolioShareResponse class provides an interace for ServiceCatalog RejectPortfolioShare responses.
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
 * \sa ServiceCatalogClient::rejectPortfolioShare
 */

/*!
 * Constructs a RejectPortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
RejectPortfolioShareResponse::RejectPortfolioShareResponse(
        const RejectPortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new RejectPortfolioShareResponsePrivate(this), parent)
{
    setRequest(new RejectPortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectPortfolioShareRequest * RejectPortfolioShareResponse::request() const
{
    Q_D(const RejectPortfolioShareResponse);
    return static_cast<const RejectPortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog RejectPortfolioShare \a response.
 */
void RejectPortfolioShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectPortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareResponsePrivate
 * \brief The RejectPortfolioShareResponsePrivate class provides private implementation for RejectPortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a RejectPortfolioShareResponsePrivate object with public implementation \a q.
 */
RejectPortfolioShareResponsePrivate::RejectPortfolioShareResponsePrivate(
    RejectPortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog RejectPortfolioShare response element from \a xml.
 */
void RejectPortfolioShareResponsePrivate::parseRejectPortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectPortfolioShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
