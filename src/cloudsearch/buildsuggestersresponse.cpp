// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "buildsuggestersresponse.h"
#include "buildsuggestersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::BuildSuggestersResponse
 * \brief The BuildSuggestersResponse class provides an interace for CloudSearch BuildSuggesters responses.
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
 * \sa CloudSearchClient::buildSuggesters
 */

/*!
 * Constructs a BuildSuggestersResponse object for \a reply to \a request, with parent \a parent.
 */
BuildSuggestersResponse::BuildSuggestersResponse(
        const BuildSuggestersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new BuildSuggestersResponsePrivate(this), parent)
{
    setRequest(new BuildSuggestersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BuildSuggestersRequest * BuildSuggestersResponse::request() const
{
    Q_D(const BuildSuggestersResponse);
    return static_cast<const BuildSuggestersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch BuildSuggesters \a response.
 */
void BuildSuggestersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BuildSuggestersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::BuildSuggestersResponsePrivate
 * \brief The BuildSuggestersResponsePrivate class provides private implementation for BuildSuggestersResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a BuildSuggestersResponsePrivate object with public implementation \a q.
 */
BuildSuggestersResponsePrivate::BuildSuggestersResponsePrivate(
    BuildSuggestersResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch BuildSuggesters response element from \a xml.
 */
void BuildSuggestersResponsePrivate::parseBuildSuggestersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BuildSuggestersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
