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

#include "listtaskexecutionsresponse.h"
#include "listtaskexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListTaskExecutionsResponse
 * \brief The ListTaskExecutionsResponse class provides an interace for DataSync ListTaskExecutions responses.
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
 * \sa DataSyncClient::listTaskExecutions
 */

/*!
 * Constructs a ListTaskExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTaskExecutionsResponse::ListTaskExecutionsResponse(
        const ListTaskExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListTaskExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListTaskExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTaskExecutionsRequest * ListTaskExecutionsResponse::request() const
{
    Q_D(const ListTaskExecutionsResponse);
    return static_cast<const ListTaskExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListTaskExecutions \a response.
 */
void ListTaskExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTaskExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListTaskExecutionsResponsePrivate
 * \brief The ListTaskExecutionsResponsePrivate class provides private implementation for ListTaskExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListTaskExecutionsResponsePrivate object with public implementation \a q.
 */
ListTaskExecutionsResponsePrivate::ListTaskExecutionsResponsePrivate(
    ListTaskExecutionsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListTaskExecutions response element from \a xml.
 */
void ListTaskExecutionsResponsePrivate::parseListTaskExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTaskExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
