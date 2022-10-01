// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportfolioshareresponse.h"
#include "createportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareResponse
 * \brief The CreatePortfolioShareResponse class provides an interace for ServiceCatalog CreatePortfolioShare responses.
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
 * \sa ServiceCatalogClient::createPortfolioShare
 */

/*!
 * Constructs a CreatePortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePortfolioShareResponse::CreatePortfolioShareResponse(
        const CreatePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreatePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new CreatePortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePortfolioShareRequest * CreatePortfolioShareResponse::request() const
{
    Q_D(const CreatePortfolioShareResponse);
    return static_cast<const CreatePortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreatePortfolioShare \a response.
 */
void CreatePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareResponsePrivate
 * \brief The CreatePortfolioShareResponsePrivate class provides private implementation for CreatePortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreatePortfolioShareResponsePrivate object with public implementation \a q.
 */
CreatePortfolioShareResponsePrivate::CreatePortfolioShareResponsePrivate(
    CreatePortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreatePortfolioShare response element from \a xml.
 */
void CreatePortfolioShareResponsePrivate::parseCreatePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortfolioShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
