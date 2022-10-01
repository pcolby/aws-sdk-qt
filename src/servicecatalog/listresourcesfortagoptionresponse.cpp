// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesfortagoptionresponse.h"
#include "listresourcesfortagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionResponse
 * \brief The ListResourcesForTagOptionResponse class provides an interace for ServiceCatalog ListResourcesForTagOption responses.
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
 * \sa ServiceCatalogClient::listResourcesForTagOption
 */

/*!
 * Constructs a ListResourcesForTagOptionResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesForTagOptionResponse::ListResourcesForTagOptionResponse(
        const ListResourcesForTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListResourcesForTagOptionResponsePrivate(this), parent)
{
    setRequest(new ListResourcesForTagOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesForTagOptionRequest * ListResourcesForTagOptionResponse::request() const
{
    Q_D(const ListResourcesForTagOptionResponse);
    return static_cast<const ListResourcesForTagOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListResourcesForTagOption \a response.
 */
void ListResourcesForTagOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesForTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionResponsePrivate
 * \brief The ListResourcesForTagOptionResponsePrivate class provides private implementation for ListResourcesForTagOptionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListResourcesForTagOptionResponsePrivate object with public implementation \a q.
 */
ListResourcesForTagOptionResponsePrivate::ListResourcesForTagOptionResponsePrivate(
    ListResourcesForTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListResourcesForTagOption response element from \a xml.
 */
void ListResourcesForTagOptionResponsePrivate::parseListResourcesForTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesForTagOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
