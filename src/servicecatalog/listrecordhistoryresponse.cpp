// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecordhistoryresponse.h"
#include "listrecordhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListRecordHistoryResponse
 * \brief The ListRecordHistoryResponse class provides an interace for ServiceCatalog ListRecordHistory responses.
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
 * \sa ServiceCatalogClient::listRecordHistory
 */

/*!
 * Constructs a ListRecordHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecordHistoryResponse::ListRecordHistoryResponse(
        const ListRecordHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListRecordHistoryResponsePrivate(this), parent)
{
    setRequest(new ListRecordHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecordHistoryRequest * ListRecordHistoryResponse::request() const
{
    Q_D(const ListRecordHistoryResponse);
    return static_cast<const ListRecordHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListRecordHistory \a response.
 */
void ListRecordHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecordHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListRecordHistoryResponsePrivate
 * \brief The ListRecordHistoryResponsePrivate class provides private implementation for ListRecordHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListRecordHistoryResponsePrivate object with public implementation \a q.
 */
ListRecordHistoryResponsePrivate::ListRecordHistoryResponsePrivate(
    ListRecordHistoryResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListRecordHistory response element from \a xml.
 */
void ListRecordHistoryResponsePrivate::parseListRecordHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecordHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
