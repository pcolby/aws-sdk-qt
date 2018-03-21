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

#include "approveassignmentresponse.h"
#include "approveassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ApproveAssignmentResponse
 *
 * @brief  Handles MTurk ApproveAssignment responses.
 *
 * @see    MTurkClient::approveAssignment
 */

/**
 * @brief  Constructs a new ApproveAssignmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApproveAssignmentResponse::ApproveAssignmentResponse(
        const ApproveAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ApproveAssignmentResponsePrivate(this), parent)
{
    setRequest(new ApproveAssignmentRequest(request));
    setReply(reply);
}

const ApproveAssignmentRequest * ApproveAssignmentResponse::request() const
{
    Q_D(const ApproveAssignmentResponse);
    return static_cast<const ApproveAssignmentRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ApproveAssignment response.
 *
 * @param  response  Response to parse.
 */
void ApproveAssignmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApproveAssignmentResponsePrivate
 *
 * @brief  Private implementation for ApproveAssignmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApproveAssignmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApproveAssignmentResponse instance.
 */
ApproveAssignmentResponsePrivate::ApproveAssignmentResponsePrivate(
    ApproveAssignmentQueueResponse * const q) : ApproveAssignmentPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ApproveAssignmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApproveAssignmentResponsePrivate::ApproveAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApproveAssignmentResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
