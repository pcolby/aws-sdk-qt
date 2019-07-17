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

#include "upgradeelasticsearchdomainresponse.h"
#include "upgradeelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::UpgradeElasticsearchDomainResponse
 * \brief The UpgradeElasticsearchDomainResponse class provides an interace for ElasticsearchService UpgradeElasticsearchDomain responses.
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
 * \sa ElasticsearchServiceClient::upgradeElasticsearchDomain
 */

/*!
 * Constructs a UpgradeElasticsearchDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpgradeElasticsearchDomainResponse::UpgradeElasticsearchDomainResponse(
        const UpgradeElasticsearchDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new UpgradeElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new UpgradeElasticsearchDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpgradeElasticsearchDomainRequest * UpgradeElasticsearchDomainResponse::request() const
{
    Q_D(const UpgradeElasticsearchDomainResponse);
    return static_cast<const UpgradeElasticsearchDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService UpgradeElasticsearchDomain \a response.
 */
void UpgradeElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpgradeElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::UpgradeElasticsearchDomainResponsePrivate
 * \brief The UpgradeElasticsearchDomainResponsePrivate class provides private implementation for UpgradeElasticsearchDomainResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a UpgradeElasticsearchDomainResponsePrivate object with public implementation \a q.
 */
UpgradeElasticsearchDomainResponsePrivate::UpgradeElasticsearchDomainResponsePrivate(
    UpgradeElasticsearchDomainResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService UpgradeElasticsearchDomain response element from \a xml.
 */
void UpgradeElasticsearchDomainResponsePrivate::parseUpgradeElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpgradeElasticsearchDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
