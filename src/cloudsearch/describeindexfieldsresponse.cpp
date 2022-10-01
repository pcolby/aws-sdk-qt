// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeindexfieldsresponse.h"
#include "describeindexfieldsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeIndexFieldsResponse
 * \brief The DescribeIndexFieldsResponse class provides an interace for CloudSearch DescribeIndexFields responses.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeIndexFields
 */

/*!
 * Constructs a DescribeIndexFieldsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIndexFieldsResponse::DescribeIndexFieldsResponse(
        const DescribeIndexFieldsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeIndexFieldsResponsePrivate(this), parent)
{
    setRequest(new DescribeIndexFieldsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIndexFieldsRequest * DescribeIndexFieldsResponse::request() const
{
    Q_D(const DescribeIndexFieldsResponse);
    return static_cast<const DescribeIndexFieldsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeIndexFields \a response.
 */
void DescribeIndexFieldsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIndexFieldsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeIndexFieldsResponsePrivate
 * \brief The DescribeIndexFieldsResponsePrivate class provides private implementation for DescribeIndexFieldsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeIndexFieldsResponsePrivate object with public implementation \a q.
 */
DescribeIndexFieldsResponsePrivate::DescribeIndexFieldsResponsePrivate(
    DescribeIndexFieldsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeIndexFields response element from \a xml.
 */
void DescribeIndexFieldsResponsePrivate::parseDescribeIndexFieldsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIndexFieldsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
