// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventactionsresponse.h"
#include "listeventactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::ListEventActionsResponse
 * \brief The ListEventActionsResponse class provides an interace for DataExchange ListEventActions responses.
 *
 * \inmodule QtAwsDataExchange
 *
 *  AWS Data Exchange is a service that makes it easy for AWS customers to exchange data in the cloud. You can use the AWS
 *  Data Exchange APIs to create, update, manage, and access file-based data set in the AWS
 * 
 *  Cloud>
 * 
 *  As a subscriber, you can view and access the data sets that you have an entitlement to through a subscription. You can
 *  use the APIS to download or copy your entitled data sets to Amazon S3 for use across a variety of AWS analytics and
 *  machine learning
 * 
 *  services>
 * 
 *  As a provider, you can create and manage your data sets that you would like to publish to a product. Being able to
 *  package and provide your data sets into products requires a few steps to determine eligibility. For more information,
 *  visit the AWS Data Exchange User
 * 
 *  Guide>
 * 
 *  A data set is a collection of data that can be changed or updated over time. Data sets can be updated using revisions,
 *  which represent a new version or incremental change to a data set. A revision contains one or more assets. An asset in
 *  AWS Data Exchange is a piece of data that can be stored as an Amazon S3 object. The asset can be a structured data file,
 *  an image file, or some other data file. Jobs are asynchronous import or export operations used to create or copy
 *
 * \sa DataExchangeClient::listEventActions
 */

/*!
 * Constructs a ListEventActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventActionsResponse::ListEventActionsResponse(
        const ListEventActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataExchangeResponse(new ListEventActionsResponsePrivate(this), parent)
{
    setRequest(new ListEventActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventActionsRequest * ListEventActionsResponse::request() const
{
    Q_D(const ListEventActionsResponse);
    return static_cast<const ListEventActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataExchange ListEventActions \a response.
 */
void ListEventActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataExchange::ListEventActionsResponsePrivate
 * \brief The ListEventActionsResponsePrivate class provides private implementation for ListEventActionsResponse.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a ListEventActionsResponsePrivate object with public implementation \a q.
 */
ListEventActionsResponsePrivate::ListEventActionsResponsePrivate(
    ListEventActionsResponse * const q) : DataExchangeResponsePrivate(q)
{

}

/*!
 * Parses a DataExchange ListEventActions response element from \a xml.
 */
void ListEventActionsResponsePrivate::parseListEventActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataExchange
} // namespace QtAws
