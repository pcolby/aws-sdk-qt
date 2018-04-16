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

#include "getsuiteresponse.h"
#include "getsuiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteResponse
 *
 * \brief The GetSuiteResponse class provides an interace for DeviceFarm GetSuite responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * @brief  Constructs a new GetSuiteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSuiteResponse::GetSuiteResponse(
        const GetSuiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetSuiteResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRequest(request));
    setReply(reply);
}

const GetSuiteRequest * GetSuiteResponse::request() const
{
    Q_D(const GetSuiteResponse);
    return static_cast<const GetSuiteRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetSuite response.
 *
 * @param  response  Response to parse.
 */
void GetSuiteResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSuiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetSuiteResponsePrivate
 *
 * \brief Private implementation for GetSuiteResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSuiteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSuiteResponse instance.
 */
GetSuiteResponsePrivate::GetSuiteResponsePrivate(
    GetSuiteResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetSuiteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSuiteResponsePrivate::parseGetSuiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
