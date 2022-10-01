// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainconfigresponse.h"
#include "updatedomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::UpdateDomainConfigResponse
 * \brief The UpdateDomainConfigResponse class provides an interace for OpenSearch UpdateDomainConfig responses.
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
 * \sa OpenSearchClient::updateDomainConfig
 */

/*!
 * Constructs a UpdateDomainConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainConfigResponse::UpdateDomainConfigResponse(
        const UpdateDomainConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new UpdateDomainConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainConfigRequest * UpdateDomainConfigResponse::request() const
{
    Q_D(const UpdateDomainConfigResponse);
    return static_cast<const UpdateDomainConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch UpdateDomainConfig \a response.
 */
void UpdateDomainConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::UpdateDomainConfigResponsePrivate
 * \brief The UpdateDomainConfigResponsePrivate class provides private implementation for UpdateDomainConfigResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a UpdateDomainConfigResponsePrivate object with public implementation \a q.
 */
UpdateDomainConfigResponsePrivate::UpdateDomainConfigResponsePrivate(
    UpdateDomainConfigResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch UpdateDomainConfig response element from \a xml.
 */
void UpdateDomainConfigResponsePrivate::parseUpdateDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
