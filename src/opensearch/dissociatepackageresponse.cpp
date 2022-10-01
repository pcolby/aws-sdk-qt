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

#include "dissociatepackageresponse.h"
#include "dissociatepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DissociatePackageResponse
 * \brief The DissociatePackageResponse class provides an interace for OpenSearch DissociatePackage responses.
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
 * \sa OpenSearchClient::dissociatePackage
 */

/*!
 * Constructs a DissociatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
DissociatePackageResponse::DissociatePackageResponse(
        const DissociatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DissociatePackageResponsePrivate(this), parent)
{
    setRequest(new DissociatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DissociatePackageRequest * DissociatePackageResponse::request() const
{
    Q_D(const DissociatePackageResponse);
    return static_cast<const DissociatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DissociatePackage \a response.
 */
void DissociatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DissociatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DissociatePackageResponsePrivate
 * \brief The DissociatePackageResponsePrivate class provides private implementation for DissociatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DissociatePackageResponsePrivate object with public implementation \a q.
 */
DissociatePackageResponsePrivate::DissociatePackageResponsePrivate(
    DissociatePackageResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DissociatePackage response element from \a xml.
 */
void DissociatePackageResponsePrivate::parseDissociatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DissociatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
