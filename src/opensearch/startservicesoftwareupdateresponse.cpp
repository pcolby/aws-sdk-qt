// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startservicesoftwareupdateresponse.h"
#include "startservicesoftwareupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::StartServiceSoftwareUpdateResponse
 * \brief The StartServiceSoftwareUpdateResponse class provides an interace for OpenSearch StartServiceSoftwareUpdate responses.
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
 * \sa OpenSearchClient::startServiceSoftwareUpdate
 */

/*!
 * Constructs a StartServiceSoftwareUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
StartServiceSoftwareUpdateResponse::StartServiceSoftwareUpdateResponse(
        const StartServiceSoftwareUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new StartServiceSoftwareUpdateResponsePrivate(this), parent)
{
    setRequest(new StartServiceSoftwareUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartServiceSoftwareUpdateRequest * StartServiceSoftwareUpdateResponse::request() const
{
    Q_D(const StartServiceSoftwareUpdateResponse);
    return static_cast<const StartServiceSoftwareUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch StartServiceSoftwareUpdate \a response.
 */
void StartServiceSoftwareUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartServiceSoftwareUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::StartServiceSoftwareUpdateResponsePrivate
 * \brief The StartServiceSoftwareUpdateResponsePrivate class provides private implementation for StartServiceSoftwareUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a StartServiceSoftwareUpdateResponsePrivate object with public implementation \a q.
 */
StartServiceSoftwareUpdateResponsePrivate::StartServiceSoftwareUpdateResponsePrivate(
    StartServiceSoftwareUpdateResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch StartServiceSoftwareUpdate response element from \a xml.
 */
void StartServiceSoftwareUpdateResponsePrivate::parseStartServiceSoftwareUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartServiceSoftwareUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
