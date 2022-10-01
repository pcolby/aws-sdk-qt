// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeavailabilityoptionsresponse.h"
#include "describeavailabilityoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeAvailabilityOptionsResponse
 * \brief The DescribeAvailabilityOptionsResponse class provides an interace for CloudSearch DescribeAvailabilityOptions responses.
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
 * \sa CloudSearchClient::describeAvailabilityOptions
 */

/*!
 * Constructs a DescribeAvailabilityOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAvailabilityOptionsResponse::DescribeAvailabilityOptionsResponse(
        const DescribeAvailabilityOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeAvailabilityOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAvailabilityOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAvailabilityOptionsRequest * DescribeAvailabilityOptionsResponse::request() const
{
    Q_D(const DescribeAvailabilityOptionsResponse);
    return static_cast<const DescribeAvailabilityOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeAvailabilityOptions \a response.
 */
void DescribeAvailabilityOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAvailabilityOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeAvailabilityOptionsResponsePrivate
 * \brief The DescribeAvailabilityOptionsResponsePrivate class provides private implementation for DescribeAvailabilityOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeAvailabilityOptionsResponsePrivate object with public implementation \a q.
 */
DescribeAvailabilityOptionsResponsePrivate::DescribeAvailabilityOptionsResponsePrivate(
    DescribeAvailabilityOptionsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeAvailabilityOptions response element from \a xml.
 */
void DescribeAvailabilityOptionsResponsePrivate::parseDescribeAvailabilityOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAvailabilityOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
