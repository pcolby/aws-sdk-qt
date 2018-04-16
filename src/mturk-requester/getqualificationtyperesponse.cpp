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

#include "getqualificationtyperesponse.h"
#include "getqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationTypeResponse
 *
 * \brief The GetQualificationTypeResponse class encapsulates MTurk GetQualificationType responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::getQualificationType
 */

/*!
 * @brief  Constructs a new GetQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQualificationTypeResponse::GetQualificationTypeResponse(
        const GetQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new GetQualificationTypeRequest(request));
    setReply(reply);
}

const GetQualificationTypeRequest * GetQualificationTypeResponse::request() const
{
    Q_D(const GetQualificationTypeResponse);
    return static_cast<const GetQualificationTypeRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk GetQualificationType response.
 *
 * @param  response  Response to parse.
 */
void GetQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetQualificationTypeResponsePrivate
 *
 * \brief Private implementation for GetQualificationTypeResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQualificationTypeResponse instance.
 */
GetQualificationTypeResponsePrivate::GetQualificationTypeResponsePrivate(
    GetQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk GetQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQualificationTypeResponsePrivate::parseGetQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
