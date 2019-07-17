/*
    Copyright 2013-2019 Paul Colby

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
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::GetUpgradeStatusResponse
 * \brief The GetUpgradeStatusResponse class provides an interace for ElasticsearchService GetUpgradeStatus responses.
 *
 * \inmodule QtAwsElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::getUpgradeStatus
 */

/*!
 * Constructs a GetUpgradeStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetUpgradeStatusResponse::GetUpgradeStatusResponse(
        const GetUpgradeStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new GetUpgradeStatusResponsePrivate(this), parent)
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
 * Parses a successful ElasticsearchService GetUpgradeStatus \a response.
 */
void GetUpgradeStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUpgradeStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::GetUpgradeStatusResponsePrivate
 * \brief The GetUpgradeStatusResponsePrivate class provides private implementation for GetUpgradeStatusResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a GetUpgradeStatusResponsePrivate object with public implementation \a q.
 */
GetUpgradeStatusResponsePrivate::GetUpgradeStatusResponsePrivate(
    GetUpgradeStatusResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService GetUpgradeStatus response element from \a xml.
 */
void GetUpgradeStatusResponsePrivate::parseGetUpgradeStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUpgradeStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
