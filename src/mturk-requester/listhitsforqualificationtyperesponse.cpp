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

#include "listhitsforqualificationtyperesponse.h"
#include "listhitsforqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  ListHITsForQualificationTypeResponse
 *
 * @brief  Handles MTurk ListHITsForQualificationType responses.
 *
 * @see    MTurkClient::listHITsForQualificationType
 */

/**
 * @brief  Constructs a new ListHITsForQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHITsForQualificationTypeResponse::ListHITsForQualificationTypeResponse(
        const ListHITsForQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListHITsForQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new ListHITsForQualificationTypeRequest(request));
    setReply(reply);
}

const ListHITsForQualificationTypeRequest * ListHITsForQualificationTypeResponse::request() const
{
    Q_D(const ListHITsForQualificationTypeResponse);
    return static_cast<const ListHITsForQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListHITsForQualificationType response.
 *
 * @param  response  Response to parse.
 */
void ListHITsForQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHITsForQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for ListHITsForQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHITsForQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHITsForQualificationTypeResponse instance.
 */
ListHITsForQualificationTypeResponsePrivate::ListHITsForQualificationTypeResponsePrivate(
    ListHITsForQualificationTypeQueueResponse * const q) : ListHITsForQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListHITsForQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHITsForQualificationTypeResponsePrivate::ListHITsForQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHITsForQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
