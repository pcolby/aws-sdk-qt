// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackageresponse.h"
#include "deletepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DeletePackageResponse
 * \brief The DeletePackageResponse class provides an interace for OpenSearch DeletePackage responses.
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
 * \sa OpenSearchClient::deletePackage
 */

/*!
 * Constructs a DeletePackageResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackageResponse::DeletePackageResponse(
        const DeletePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DeletePackageResponsePrivate(this), parent)
{
    setRequest(new DeletePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackageRequest * DeletePackageResponse::request() const
{
    Q_D(const DeletePackageResponse);
    return static_cast<const DeletePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DeletePackage \a response.
 */
void DeletePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DeletePackageResponsePrivate
 * \brief The DeletePackageResponsePrivate class provides private implementation for DeletePackageResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DeletePackageResponsePrivate object with public implementation \a q.
 */
DeletePackageResponsePrivate::DeletePackageResponsePrivate(
    DeletePackageResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DeletePackage response element from \a xml.
 */
void DeletePackageResponsePrivate::parseDeletePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
