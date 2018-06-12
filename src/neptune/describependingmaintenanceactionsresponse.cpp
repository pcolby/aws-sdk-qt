/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describependingmaintenanceactionsresponse.h"
#include "describependingmaintenanceactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribePendingMaintenanceActionsResponse
 * \brief The DescribePendingMaintenanceActionsResponse class provides an interace for Neptune DescribePendingMaintenanceActions responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 *
 * \sa NeptuneClient::describePendingMaintenanceActions
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePendingMaintenanceActionsResponse::DescribePendingMaintenanceActionsResponse(
        const DescribePendingMaintenanceActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new DescribePendingMaintenanceActionsResponsePrivate(this), parent)
{
    setRequest(new DescribePendingMaintenanceActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePendingMaintenanceActionsRequest * DescribePendingMaintenanceActionsResponse::request() const
{
    Q_D(const DescribePendingMaintenanceActionsResponse);
    return static_cast<const DescribePendingMaintenanceActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune DescribePendingMaintenanceActions \a response.
 */
void DescribePendingMaintenanceActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePendingMaintenanceActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::DescribePendingMaintenanceActionsResponsePrivate
 * \brief The DescribePendingMaintenanceActionsResponsePrivate class provides private implementation for DescribePendingMaintenanceActionsResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribePendingMaintenanceActionsResponsePrivate object with public implementation \a q.
 */
DescribePendingMaintenanceActionsResponsePrivate::DescribePendingMaintenanceActionsResponsePrivate(
    DescribePendingMaintenanceActionsResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune DescribePendingMaintenanceActions response element from \a xml.
 */
void DescribePendingMaintenanceActionsResponsePrivate::parseDescribePendingMaintenanceActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePendingMaintenanceActionsResponse"));
    /// @todo
}

} // namespace Neptune
} // namespace QtAws
