// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelservicesoftwareupdateresponse.h"
#include "cancelservicesoftwareupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CancelServiceSoftwareUpdateResponse
 * \brief The CancelServiceSoftwareUpdateResponse class provides an interace for OpenSearch CancelServiceSoftwareUpdate responses.
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
 * \sa OpenSearchClient::cancelServiceSoftwareUpdate
 */

/*!
 * Constructs a CancelServiceSoftwareUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
CancelServiceSoftwareUpdateResponse::CancelServiceSoftwareUpdateResponse(
        const CancelServiceSoftwareUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new CancelServiceSoftwareUpdateResponsePrivate(this), parent)
{
    setRequest(new CancelServiceSoftwareUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelServiceSoftwareUpdateRequest * CancelServiceSoftwareUpdateResponse::request() const
{
    Q_D(const CancelServiceSoftwareUpdateResponse);
    return static_cast<const CancelServiceSoftwareUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch CancelServiceSoftwareUpdate \a response.
 */
void CancelServiceSoftwareUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelServiceSoftwareUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::CancelServiceSoftwareUpdateResponsePrivate
 * \brief The CancelServiceSoftwareUpdateResponsePrivate class provides private implementation for CancelServiceSoftwareUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CancelServiceSoftwareUpdateResponsePrivate object with public implementation \a q.
 */
CancelServiceSoftwareUpdateResponsePrivate::CancelServiceSoftwareUpdateResponsePrivate(
    CancelServiceSoftwareUpdateResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch CancelServiceSoftwareUpdate response element from \a xml.
 */
void CancelServiceSoftwareUpdateResponsePrivate::parseCancelServiceSoftwareUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelServiceSoftwareUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
