// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
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
