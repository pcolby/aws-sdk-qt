// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainresponse.h"
#include "createdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CreateDomainResponse
 * \brief The CreateDomainResponse class provides an interace for OpenSearch CreateDomain responses.
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
 * \sa OpenSearchClient::createDomain
 */

/*!
 * Constructs a CreateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainResponse::CreateDomainResponse(
        const CreateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new CreateDomainResponsePrivate(this), parent)
{
    setRequest(new CreateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainRequest * CreateDomainResponse::request() const
{
    Q_D(const CreateDomainResponse);
    return static_cast<const CreateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch CreateDomain \a response.
 */
void CreateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::CreateDomainResponsePrivate
 * \brief The CreateDomainResponsePrivate class provides private implementation for CreateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CreateDomainResponsePrivate object with public implementation \a q.
 */
CreateDomainResponsePrivate::CreateDomainResponsePrivate(
    CreateDomainResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch CreateDomain response element from \a xml.
 */
void CreateDomainResponsePrivate::parseCreateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
