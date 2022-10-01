// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainnamesresponse.h"
#include "listdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListDomainNamesResponse
 * \brief The ListDomainNamesResponse class provides an interace for Elasticsearch ListDomainNames responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::listDomainNames
 */

/*!
 * Constructs a ListDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainNamesResponse::ListDomainNamesResponse(
        const ListDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new ListDomainNamesResponsePrivate(this), parent)
{
    setRequest(new ListDomainNamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainNamesRequest * ListDomainNamesResponse::request() const
{
    Q_D(const ListDomainNamesResponse);
    return static_cast<const ListDomainNamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch ListDomainNames \a response.
 */
void ListDomainNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::ListDomainNamesResponsePrivate
 * \brief The ListDomainNamesResponsePrivate class provides private implementation for ListDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListDomainNamesResponsePrivate object with public implementation \a q.
 */
ListDomainNamesResponsePrivate::ListDomainNamesResponsePrivate(
    ListDomainNamesResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch ListDomainNames response element from \a xml.
 */
void ListDomainNamesResponsePrivate::parseListDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
