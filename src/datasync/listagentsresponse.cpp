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

#include "listagentsresponse.h"
#include "listagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListAgentsResponse
 * \brief The ListAgentsResponse class provides an interace for DataSync ListAgents responses.
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
 * \sa DataSyncClient::listAgents
 */

/*!
 * Constructs a ListAgentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAgentsResponse::ListAgentsResponse(
        const ListAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListAgentsResponsePrivate(this), parent)
{
    setRequest(new ListAgentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAgentsRequest * ListAgentsResponse::request() const
{
    Q_D(const ListAgentsResponse);
    return static_cast<const ListAgentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListAgents \a response.
 */
void ListAgentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListAgentsResponsePrivate
 * \brief The ListAgentsResponsePrivate class provides private implementation for ListAgentsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListAgentsResponsePrivate object with public implementation \a q.
 */
ListAgentsResponsePrivate::ListAgentsResponsePrivate(
    ListAgentsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListAgents response element from \a xml.
 */
void ListAgentsResponsePrivate::parseListAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAgentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
