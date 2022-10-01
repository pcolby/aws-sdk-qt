// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagesresponse.h"
#include "describepackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribePackagesResponse
 * \brief The DescribePackagesResponse class provides an interace for OpenSearch DescribePackages responses.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::describePackages
 */

/*!
 * Constructs a DescribePackagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackagesResponse::DescribePackagesResponse(
        const DescribePackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribePackagesResponsePrivate(this), parent)
{
    setRequest(new DescribePackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackagesRequest * DescribePackagesResponse::request() const
{
    Q_D(const DescribePackagesResponse);
    return static_cast<const DescribePackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribePackages \a response.
 */
void DescribePackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribePackagesResponsePrivate
 * \brief The DescribePackagesResponsePrivate class provides private implementation for DescribePackagesResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribePackagesResponsePrivate object with public implementation \a q.
 */
DescribePackagesResponsePrivate::DescribePackagesResponsePrivate(
    DescribePackagesResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribePackages response element from \a xml.
 */
void DescribePackagesResponsePrivate::parseDescribePackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
