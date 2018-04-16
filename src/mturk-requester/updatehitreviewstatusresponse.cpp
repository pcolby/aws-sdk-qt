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

#include "updatehitreviewstatusresponse.h"
#include "updatehitreviewstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusResponse
 *
 * \brief The UpdateHITReviewStatusResponse class encapsulates MTurk UpdateHITReviewStatus responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::updateHITReviewStatus
 */

/*!
 * @brief  Constructs a new UpdateHITReviewStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHITReviewStatusResponse::UpdateHITReviewStatusResponse(
        const UpdateHITReviewStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateHITReviewStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateHITReviewStatusRequest(request));
    setReply(reply);
}

const UpdateHITReviewStatusRequest * UpdateHITReviewStatusResponse::request() const
{
    Q_D(const UpdateHITReviewStatusResponse);
    return static_cast<const UpdateHITReviewStatusRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk UpdateHITReviewStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdateHITReviewStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateHITReviewStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateHITReviewStatusResponsePrivate
 *
 * \brief Private implementation for UpdateHITReviewStatusResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateHITReviewStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateHITReviewStatusResponse instance.
 */
UpdateHITReviewStatusResponsePrivate::UpdateHITReviewStatusResponsePrivate(
    UpdateHITReviewStatusResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk UpdateHITReviewStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateHITReviewStatusResponsePrivate::parseUpdateHITReviewStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHITReviewStatusResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
