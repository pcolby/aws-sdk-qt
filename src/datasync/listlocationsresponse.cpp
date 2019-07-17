/*
    Copyright 2013-2019 Paul Colby

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

#include "listlocationsresponse.h"
#include "listlocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListLocationsResponse
 * \brief The ListLocationsResponse class provides an interace for DataSync ListLocations responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::listLocations
 */

/*!
 * Constructs a ListLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLocationsResponse::ListLocationsResponse(
        const ListLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListLocationsResponsePrivate(this), parent)
{
    setRequest(new ListLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLocationsRequest * ListLocationsResponse::request() const
{
    Q_D(const ListLocationsResponse);
    return static_cast<const ListLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListLocations \a response.
 */
void ListLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListLocationsResponsePrivate
 * \brief The ListLocationsResponsePrivate class provides private implementation for ListLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListLocationsResponsePrivate object with public implementation \a q.
 */
ListLocationsResponsePrivate::ListLocationsResponsePrivate(
    ListLocationsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListLocations response element from \a xml.
 */
void ListLocationsResponsePrivate::parseListLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
