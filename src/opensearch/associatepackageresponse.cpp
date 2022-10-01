// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatepackageresponse.h"
#include "associatepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::AssociatePackageResponse
 * \brief The AssociatePackageResponse class provides an interace for OpenSearch AssociatePackage responses.
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
 * \sa OpenSearchClient::associatePackage
 */

/*!
 * Constructs a AssociatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
AssociatePackageResponse::AssociatePackageResponse(
        const AssociatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new AssociatePackageResponsePrivate(this), parent)
{
    setRequest(new AssociatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociatePackageRequest * AssociatePackageResponse::request() const
{
    Q_D(const AssociatePackageResponse);
    return static_cast<const AssociatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch AssociatePackage \a response.
 */
void AssociatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::AssociatePackageResponsePrivate
 * \brief The AssociatePackageResponsePrivate class provides private implementation for AssociatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a AssociatePackageResponsePrivate object with public implementation \a q.
 */
AssociatePackageResponsePrivate::AssociatePackageResponsePrivate(
    AssociatePackageResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch AssociatePackage response element from \a xml.
 */
void AssociatePackageResponsePrivate::parseAssociatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
