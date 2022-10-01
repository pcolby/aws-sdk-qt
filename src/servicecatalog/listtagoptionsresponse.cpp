// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagoptionsresponse.h"
#include "listtagoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListTagOptionsResponse
 * \brief The ListTagOptionsResponse class provides an interace for ServiceCatalog ListTagOptions responses.
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
 * \sa ServiceCatalogClient::listTagOptions
 */

/*!
 * Constructs a ListTagOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagOptionsResponse::ListTagOptionsResponse(
        const ListTagOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListTagOptionsResponsePrivate(this), parent)
{
    setRequest(new ListTagOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagOptionsRequest * ListTagOptionsResponse::request() const
{
    Q_D(const ListTagOptionsResponse);
    return static_cast<const ListTagOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListTagOptions \a response.
 */
void ListTagOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListTagOptionsResponsePrivate
 * \brief The ListTagOptionsResponsePrivate class provides private implementation for ListTagOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListTagOptionsResponsePrivate object with public implementation \a q.
 */
ListTagOptionsResponsePrivate::ListTagOptionsResponsePrivate(
    ListTagOptionsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListTagOptions response element from \a xml.
 */
void ListTagOptionsResponsePrivate::parseListTagOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
