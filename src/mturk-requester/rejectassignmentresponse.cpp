/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rejectassignmentresponse.h"
#include "rejectassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  RejectAssignmentResponse
 *
 * @brief  Handles MTurk RejectAssignment responses.
 *
 * @see    MTurkClient::rejectAssignment
 */

/**
 * @brief  Constructs a new RejectAssignmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectAssignmentResponse::RejectAssignmentResponse(
        const RejectAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectAssignmentResponsePrivate(this), parent)
{
    setRequest(new RejectAssignmentRequest(request));
    setReply(reply);
}

const RejectAssignmentRequest * RejectAssignmentResponse::request() const
{
    Q_D(const RejectAssignmentResponse);
    return static_cast<const RejectAssignmentRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk RejectAssignment response.
 *
 * @param  response  Response to parse.
 */
void RejectAssignmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RejectAssignmentResponsePrivate
 *
 * @brief  Private implementation for RejectAssignmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectAssignmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RejectAssignmentResponse instance.
 */
RejectAssignmentResponsePrivate::RejectAssignmentResponsePrivate(
    RejectAssignmentQueueResponse * const q) : RejectAssignmentPrivate(q)
{

}

/**
 * @brief  Parse an MTurk RejectAssignmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RejectAssignmentResponsePrivate::RejectAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectAssignmentResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
