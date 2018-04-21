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
 * \brief The UpdateHITReviewStatusResponse class provides an interace for MTurk UpdateHITReviewStatus responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateHITReviewStatus
 */

/*!
 * Constructs a UpdateHITReviewStatusResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const UpdateHITReviewStatusRequest * UpdateHITReviewStatusResponse::request() const
{
    Q_D(const UpdateHITReviewStatusResponse);
    return static_cast<const UpdateHITReviewStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateHITReviewStatus \a response.
 */
void UpdateHITReviewStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateHITReviewStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusResponsePrivate
 * \brief The UpdateHITReviewStatusResponsePrivate class provides private implementation for UpdateHITReviewStatusResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateHITReviewStatusResponsePrivate object with public implementation \a q.
 */
UpdateHITReviewStatusResponsePrivate::UpdateHITReviewStatusResponsePrivate(
    UpdateHITReviewStatusResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateHITReviewStatus response element from \a xml.
 */
void UpdateHITReviewStatusResponsePrivate::parseUpdateHITReviewStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHITReviewStatusResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
