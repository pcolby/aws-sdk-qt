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

#include "upgradedomainresponse.h"
#include "upgradedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::UpgradeDomainResponse
 * \brief The UpgradeDomainResponse class provides an interace for OpenSearch UpgradeDomain responses.
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
 * \sa OpenSearchClient::upgradeDomain
 */

/*!
 * Constructs a UpgradeDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpgradeDomainResponse::UpgradeDomainResponse(
        const UpgradeDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new UpgradeDomainResponsePrivate(this), parent)
{
    setRequest(new UpgradeDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpgradeDomainRequest * UpgradeDomainResponse::request() const
{
    Q_D(const UpgradeDomainResponse);
    return static_cast<const UpgradeDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch UpgradeDomain \a response.
 */
void UpgradeDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpgradeDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::UpgradeDomainResponsePrivate
 * \brief The UpgradeDomainResponsePrivate class provides private implementation for UpgradeDomainResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a UpgradeDomainResponsePrivate object with public implementation \a q.
 */
UpgradeDomainResponsePrivate::UpgradeDomainResponsePrivate(
    UpgradeDomainResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch UpgradeDomain response element from \a xml.
 */
void UpgradeDomainResponsePrivate::parseUpgradeDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpgradeDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
