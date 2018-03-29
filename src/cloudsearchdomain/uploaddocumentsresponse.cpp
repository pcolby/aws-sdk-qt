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

/**
 * @class  UploadDocumentsResponse
 *
 * @brief  Handles CloudSearchDomain UploadDocuments responses.
 *
 * @see    CloudSearchDomainClient::uploadDocuments
 */

/**
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

/**
 * @brief  Parse a CloudSearchDomain UploadDocuments response.
 *
 * @param  response  Response to parse.
 */
void UploadDocumentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadDocumentsResponsePrivate
 *
 * @brief  Private implementation for UploadDocumentsResponse.
 */

/**
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

/**
 * @brief  Parse an CloudSearchDomain UploadDocumentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadDocumentsResponsePrivate::UploadDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadDocumentsResponse"));
    /// @todo
}

} // namespace CloudSearchDomain
} // namespace QtAws
