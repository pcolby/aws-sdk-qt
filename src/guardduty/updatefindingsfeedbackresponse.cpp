/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatefindingsfeedbackresponse.h"
#include "updatefindingsfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateFindingsFeedbackResponse
 * \brief The UpdateFindingsFeedbackResponse class provides an interace for GuardDuty UpdateFindingsFeedback responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::updateFindingsFeedback
 */

/*!
 * Constructs a UpdateFindingsFeedbackResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFindingsFeedbackResponse::UpdateFindingsFeedbackResponse(
        const UpdateFindingsFeedbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateFindingsFeedbackResponsePrivate(this), parent)
{
    setRequest(new UpdateFindingsFeedbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFindingsFeedbackRequest * UpdateFindingsFeedbackResponse::request() const
{
    Q_D(const UpdateFindingsFeedbackResponse);
    return static_cast<const UpdateFindingsFeedbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty UpdateFindingsFeedback \a response.
 */
void UpdateFindingsFeedbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFindingsFeedbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::UpdateFindingsFeedbackResponsePrivate
 * \brief The UpdateFindingsFeedbackResponsePrivate class provides private implementation for UpdateFindingsFeedbackResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateFindingsFeedbackResponsePrivate object with public implementation \a q.
 */
UpdateFindingsFeedbackResponsePrivate::UpdateFindingsFeedbackResponsePrivate(
    UpdateFindingsFeedbackResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty UpdateFindingsFeedback response element from \a xml.
 */
void UpdateFindingsFeedbackResponsePrivate::parseUpdateFindingsFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFindingsFeedbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
