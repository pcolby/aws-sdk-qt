// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobflowsresponse.h"
#include "describejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeJobFlowsResponse
 * \brief The DescribeJobFlowsResponse class provides an interace for Emr DescribeJobFlows responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeJobFlows
 */

/*!
 * Constructs a DescribeJobFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobFlowsResponse::DescribeJobFlowsResponse(
        const DescribeJobFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeJobFlowsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobFlowsRequest * DescribeJobFlowsResponse::request() const
{
    Q_D(const DescribeJobFlowsResponse);
    return static_cast<const DescribeJobFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DescribeJobFlows \a response.
 */
void DescribeJobFlowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DescribeJobFlowsResponsePrivate
 * \brief The DescribeJobFlowsResponsePrivate class provides private implementation for DescribeJobFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeJobFlowsResponsePrivate object with public implementation \a q.
 */
DescribeJobFlowsResponsePrivate::DescribeJobFlowsResponsePrivate(
    DescribeJobFlowsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DescribeJobFlows response element from \a xml.
 */
void DescribeJobFlowsResponsePrivate::parseDescribeJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobFlowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
