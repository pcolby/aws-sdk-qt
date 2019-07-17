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

#include "describeagentresponse.h"
#include "describeagentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeAgentResponse
 * \brief The DescribeAgentResponse class provides an interace for DataSync DescribeAgent responses.
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
 * \sa DataSyncClient::describeAgent
 */

/*!
 * Constructs a DescribeAgentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAgentResponse::DescribeAgentResponse(
        const DescribeAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeAgentResponsePrivate(this), parent)
{
    setRequest(new DescribeAgentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAgentRequest * DescribeAgentResponse::request() const
{
    Q_D(const DescribeAgentResponse);
    return static_cast<const DescribeAgentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeAgent \a response.
 */
void DescribeAgentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAgentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeAgentResponsePrivate
 * \brief The DescribeAgentResponsePrivate class provides private implementation for DescribeAgentResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeAgentResponsePrivate object with public implementation \a q.
 */
DescribeAgentResponsePrivate::DescribeAgentResponsePrivate(
    DescribeAgentResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeAgent response element from \a xml.
 */
void DescribeAgentResponsePrivate::parseDescribeAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAgentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
