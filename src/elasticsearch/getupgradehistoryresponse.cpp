// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getupgradehistoryresponse.h"
#include "getupgradehistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetUpgradeHistoryResponse
 * \brief The GetUpgradeHistoryResponse class provides an interace for Elasticsearch GetUpgradeHistory responses.
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
 * \sa ElasticsearchClient::getUpgradeHistory
 */

/*!
 * Constructs a GetUpgradeHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetUpgradeHistoryResponse::GetUpgradeHistoryResponse(
        const GetUpgradeHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new GetUpgradeHistoryResponsePrivate(this), parent)
{
    setRequest(new GetUpgradeHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUpgradeHistoryRequest * GetUpgradeHistoryResponse::request() const
{
    Q_D(const GetUpgradeHistoryResponse);
    return static_cast<const GetUpgradeHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch GetUpgradeHistory \a response.
 */
void GetUpgradeHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUpgradeHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::GetUpgradeHistoryResponsePrivate
 * \brief The GetUpgradeHistoryResponsePrivate class provides private implementation for GetUpgradeHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetUpgradeHistoryResponsePrivate object with public implementation \a q.
 */
GetUpgradeHistoryResponsePrivate::GetUpgradeHistoryResponsePrivate(
    GetUpgradeHistoryResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch GetUpgradeHistory response element from \a xml.
 */
void GetUpgradeHistoryResponsePrivate::parseGetUpgradeHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUpgradeHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
