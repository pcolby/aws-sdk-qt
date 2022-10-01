/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getupgradestatusresponse.h"
#include "getupgradestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetUpgradeStatusResponse
 * \brief The GetUpgradeStatusResponse class provides an interace for Elasticsearch GetUpgradeStatus responses.
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
 * \sa ElasticsearchClient::getUpgradeStatus
 */

/*!
 * Constructs a GetUpgradeStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetUpgradeStatusResponse::GetUpgradeStatusResponse(
        const GetUpgradeStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new GetUpgradeStatusResponsePrivate(this), parent)
{
    setRequest(new GetUpgradeStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUpgradeStatusRequest * GetUpgradeStatusResponse::request() const
{
    Q_D(const GetUpgradeStatusResponse);
    return static_cast<const GetUpgradeStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch GetUpgradeStatus \a response.
 */
void GetUpgradeStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUpgradeStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::GetUpgradeStatusResponsePrivate
 * \brief The GetUpgradeStatusResponsePrivate class provides private implementation for GetUpgradeStatusResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetUpgradeStatusResponsePrivate object with public implementation \a q.
 */
GetUpgradeStatusResponsePrivate::GetUpgradeStatusResponsePrivate(
    GetUpgradeStatusResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch GetUpgradeStatus response element from \a xml.
 */
void GetUpgradeStatusResponsePrivate::parseGetUpgradeStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUpgradeStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
