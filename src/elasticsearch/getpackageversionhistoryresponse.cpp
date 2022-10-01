// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpackageversionhistoryresponse.h"
#include "getpackageversionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetPackageVersionHistoryResponse
 * \brief The GetPackageVersionHistoryResponse class provides an interace for Elasticsearch GetPackageVersionHistory responses.
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
 * \sa ElasticsearchClient::getPackageVersionHistory
 */

/*!
 * Constructs a GetPackageVersionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetPackageVersionHistoryResponse::GetPackageVersionHistoryResponse(
        const GetPackageVersionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new GetPackageVersionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetPackageVersionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPackageVersionHistoryRequest * GetPackageVersionHistoryResponse::request() const
{
    Q_D(const GetPackageVersionHistoryResponse);
    return static_cast<const GetPackageVersionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch GetPackageVersionHistory \a response.
 */
void GetPackageVersionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPackageVersionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::GetPackageVersionHistoryResponsePrivate
 * \brief The GetPackageVersionHistoryResponsePrivate class provides private implementation for GetPackageVersionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetPackageVersionHistoryResponsePrivate object with public implementation \a q.
 */
GetPackageVersionHistoryResponsePrivate::GetPackageVersionHistoryResponsePrivate(
    GetPackageVersionHistoryResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch GetPackageVersionHistory response element from \a xml.
 */
void GetPackageVersionHistoryResponsePrivate::parseGetPackageVersionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPackageVersionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
