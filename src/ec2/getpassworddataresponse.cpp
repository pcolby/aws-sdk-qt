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

#include "getpassworddataresponse.h"
#include "getpassworddataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::GetPasswordDataResponse
 *
 * \brief The GetPasswordDataResponse class encapsulates EC2 GetPasswordData responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::getPasswordData
 */

/*!
 * @brief  Constructs a new GetPasswordDataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPasswordDataResponse::GetPasswordDataResponse(
        const GetPasswordDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetPasswordDataResponsePrivate(this), parent)
{
    setRequest(new GetPasswordDataRequest(request));
    setReply(reply);
}

const GetPasswordDataRequest * GetPasswordDataResponse::request() const
{
    Q_D(const GetPasswordDataResponse);
    return static_cast<const GetPasswordDataRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 GetPasswordData response.
 *
 * @param  response  Response to parse.
 */
void GetPasswordDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPasswordDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetPasswordDataResponsePrivate
 *
 * \brief Private implementation for GetPasswordDataResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPasswordDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPasswordDataResponse instance.
 */
GetPasswordDataResponsePrivate::GetPasswordDataResponsePrivate(
    GetPasswordDataResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 GetPasswordDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPasswordDataResponsePrivate::parseGetPasswordDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPasswordDataResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
