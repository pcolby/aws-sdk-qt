// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addsourceidentifiertosubscriptionresponse.h"
#include "addsourceidentifiertosubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::AddSourceIdentifierToSubscriptionResponse
 * \brief The AddSourceIdentifierToSubscriptionResponse class provides an interace for Neptune AddSourceIdentifierToSubscription responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddSourceIdentifierToSubscriptionResponse::AddSourceIdentifierToSubscriptionResponse(
        const AddSourceIdentifierToSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new AddSourceIdentifierToSubscriptionResponsePrivate(this), parent)
{
    setRequest(new AddSourceIdentifierToSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddSourceIdentifierToSubscriptionRequest * AddSourceIdentifierToSubscriptionResponse::request() const
{
    Q_D(const AddSourceIdentifierToSubscriptionResponse);
    return static_cast<const AddSourceIdentifierToSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune AddSourceIdentifierToSubscription \a response.
 */
void AddSourceIdentifierToSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddSourceIdentifierToSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::AddSourceIdentifierToSubscriptionResponsePrivate
 * \brief The AddSourceIdentifierToSubscriptionResponsePrivate class provides private implementation for AddSourceIdentifierToSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionResponsePrivate object with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionResponsePrivate::AddSourceIdentifierToSubscriptionResponsePrivate(
    AddSourceIdentifierToSubscriptionResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune AddSourceIdentifierToSubscription response element from \a xml.
 */
void AddSourceIdentifierToSubscriptionResponsePrivate::parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddSourceIdentifierToSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
