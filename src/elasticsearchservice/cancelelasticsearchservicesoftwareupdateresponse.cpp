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

#include "cancelelasticsearchservicesoftwareupdateresponse.h"
#include "cancelelasticsearchservicesoftwareupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::CancelElasticsearchServiceSoftwareUpdateResponse
 * \brief The CancelElasticsearchServiceSoftwareUpdateResponse class provides an interace for ElasticsearchService CancelElasticsearchServiceSoftwareUpdate responses.
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
 * \sa ElasticsearchServiceClient::cancelElasticsearchServiceSoftwareUpdate
 */

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
CancelElasticsearchServiceSoftwareUpdateResponse::CancelElasticsearchServiceSoftwareUpdateResponse(
        const CancelElasticsearchServiceSoftwareUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new CancelElasticsearchServiceSoftwareUpdateResponsePrivate(this), parent)
{
    setRequest(new CancelElasticsearchServiceSoftwareUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelElasticsearchServiceSoftwareUpdateRequest * CancelElasticsearchServiceSoftwareUpdateResponse::request() const
{
    Q_D(const CancelElasticsearchServiceSoftwareUpdateResponse);
    return static_cast<const CancelElasticsearchServiceSoftwareUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService CancelElasticsearchServiceSoftwareUpdate \a response.
 */
void CancelElasticsearchServiceSoftwareUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelElasticsearchServiceSoftwareUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::CancelElasticsearchServiceSoftwareUpdateResponsePrivate
 * \brief The CancelElasticsearchServiceSoftwareUpdateResponsePrivate class provides private implementation for CancelElasticsearchServiceSoftwareUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a CancelElasticsearchServiceSoftwareUpdateResponsePrivate object with public implementation \a q.
 */
CancelElasticsearchServiceSoftwareUpdateResponsePrivate::CancelElasticsearchServiceSoftwareUpdateResponsePrivate(
    CancelElasticsearchServiceSoftwareUpdateResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService CancelElasticsearchServiceSoftwareUpdate response element from \a xml.
 */
void CancelElasticsearchServiceSoftwareUpdateResponsePrivate::parseCancelElasticsearchServiceSoftwareUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelElasticsearchServiceSoftwareUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
