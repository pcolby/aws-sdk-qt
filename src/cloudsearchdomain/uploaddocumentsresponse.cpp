/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "uploaddocumentsresponse.h"
#include "uploaddocumentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::UploadDocumentsResponse
 *
 * \brief The UploadDocumentsResponse class provides an interace for CloudSearchDomain UploadDocuments responses.
 *
 * \ingroup CloudSearchDomain
 *
 *  You use the AmazonCloudSearch2013 API to upload documents to a search domain and search those documents.
 * 
 *  </p
 * 
 *  The endpoints for submitting <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code> requests are
 *  domain-specific. To get the endpoints for your domain, use the Amazon CloudSearch configuration service
 *  <code>DescribeDomains</code> action. The domain endpoints are also displayed on the domain dashboard in the Amazon
 *  CloudSearch console. You submit suggest requests to the search endpoint.
 * 
 *  </p
 * 
 *  For more information, see the <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon CloudSearch
 *  Developer
 *
 * \sa CloudSearchDomainClient::uploadDocuments
 */

/*!
 * @brief  Constructs a new UploadDocumentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadDocumentsResponse::UploadDocumentsResponse(
        const UploadDocumentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchDomainResponse(new UploadDocumentsResponsePrivate(this), parent)
{
    setRequest(new UploadDocumentsRequest(request));
    setReply(reply);
}

const UploadDocumentsRequest * UploadDocumentsResponse::request() const
{
    Q_D(const UploadDocumentsResponse);
    return static_cast<const UploadDocumentsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudSearchDomain UploadDocuments response.
 *
 * @param  response  Response to parse.
 */
void UploadDocumentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UploadDocumentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UploadDocumentsResponsePrivate
 *
 * \brief Private implementation for UploadDocumentsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UploadDocumentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadDocumentsResponse instance.
 */
UploadDocumentsResponsePrivate::UploadDocumentsResponsePrivate(
    UploadDocumentsResponse * const q) : CloudSearchDomainResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudSearchDomain UploadDocumentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadDocumentsResponsePrivate::parseUploadDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadDocumentsResponse"));
    /// @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
