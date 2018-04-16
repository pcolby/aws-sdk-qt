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

#include "getinvalidationresponse.h"
#include "getinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetInvalidationResponse
 *
 * \brief The GetInvalidationResponse class encapsulates CloudFront GetInvalidation responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getInvalidation
 */

/*!
 * @brief  Constructs a new GetInvalidationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInvalidationResponse::GetInvalidationResponse(
        const GetInvalidationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetInvalidationResponsePrivate(this), parent)
{
    setRequest(new GetInvalidationRequest(request));
    setReply(reply);
}

const GetInvalidationRequest * GetInvalidationResponse::request() const
{
    Q_D(const GetInvalidationResponse);
    return static_cast<const GetInvalidationRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront GetInvalidation response.
 *
 * @param  response  Response to parse.
 */
void GetInvalidationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInvalidationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetInvalidationResponsePrivate
 *
 * \brief Private implementation for GetInvalidationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetInvalidationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInvalidationResponse instance.
 */
GetInvalidationResponsePrivate::GetInvalidationResponsePrivate(
    GetInvalidationResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront GetInvalidationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInvalidationResponsePrivate::parseGetInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvalidationResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
