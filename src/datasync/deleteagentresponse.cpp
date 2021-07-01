/*
    Copyright 2013-2021 Paul Colby

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

#include "deleteagentresponse.h"
#include "deleteagentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteAgentResponse
 * \brief The DeleteAgentResponse class provides an interace for DataSync DeleteAgent responses.
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
 * \sa DataSyncClient::deleteAgent
 */

/*!
 * Constructs a DeleteAgentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAgentResponse::DeleteAgentResponse(
        const DeleteAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DeleteAgentResponsePrivate(this), parent)
{
    setRequest(new DeleteAgentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAgentRequest * DeleteAgentResponse::request() const
{
    Q_D(const DeleteAgentResponse);
    return static_cast<const DeleteAgentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DeleteAgent \a response.
 */
void DeleteAgentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAgentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DeleteAgentResponsePrivate
 * \brief The DeleteAgentResponsePrivate class provides private implementation for DeleteAgentResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteAgentResponsePrivate object with public implementation \a q.
 */
DeleteAgentResponsePrivate::DeleteAgentResponsePrivate(
    DeleteAgentResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DeleteAgent response element from \a xml.
 */
void DeleteAgentResponsePrivate::parseDeleteAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAgentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
