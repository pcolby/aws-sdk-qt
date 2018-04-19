/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(BuildSuggestersResponse);
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
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
