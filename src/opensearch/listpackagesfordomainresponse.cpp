// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackagesfordomainresponse.h"
#include "listpackagesfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListPackagesForDomainResponse
 * \brief The ListPackagesForDomainResponse class provides an interace for OpenSearch ListPackagesForDomain responses.
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
 * \sa OpenSearchClient::listPackagesForDomain
 */

/*!
 * Constructs a ListPackagesForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagesForDomainResponse::ListPackagesForDomainResponse(
        const ListPackagesForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new ListPackagesForDomainResponsePrivate(this), parent)
{
    setRequest(new ListPackagesForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagesForDomainRequest * ListPackagesForDomainResponse::request() const
{
    Q_D(const ListPackagesForDomainResponse);
    return static_cast<const ListPackagesForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch ListPackagesForDomain \a response.
 */
void ListPackagesForDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagesForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::ListPackagesForDomainResponsePrivate
 * \brief The ListPackagesForDomainResponsePrivate class provides private implementation for ListPackagesForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListPackagesForDomainResponsePrivate object with public implementation \a q.
 */
ListPackagesForDomainResponsePrivate::ListPackagesForDomainResponsePrivate(
    ListPackagesForDomainResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch ListPackagesForDomain response element from \a xml.
 */
void ListPackagesForDomainResponsePrivate::parseListPackagesForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagesForDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
