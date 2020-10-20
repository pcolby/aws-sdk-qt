/*
    Copyright 2013-2020 Paul Colby

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

#include "updatebusinessreportscheduleresponse.h"
#include "updatebusinessreportscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateBusinessReportScheduleResponse
 * \brief The UpdateBusinessReportScheduleResponse class provides an interace for AlexaForBusiness UpdateBusinessReportSchedule responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::updateBusinessReportSchedule
 */

/*!
 * Constructs a UpdateBusinessReportScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBusinessReportScheduleResponse::UpdateBusinessReportScheduleResponse(
        const UpdateBusinessReportScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateBusinessReportScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateBusinessReportScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBusinessReportScheduleRequest * UpdateBusinessReportScheduleResponse::request() const
{
    Q_D(const UpdateBusinessReportScheduleResponse);
    return static_cast<const UpdateBusinessReportScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateBusinessReportSchedule \a response.
 */
void UpdateBusinessReportScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBusinessReportScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateBusinessReportScheduleResponsePrivate
 * \brief The UpdateBusinessReportScheduleResponsePrivate class provides private implementation for UpdateBusinessReportScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateBusinessReportScheduleResponsePrivate object with public implementation \a q.
 */
UpdateBusinessReportScheduleResponsePrivate::UpdateBusinessReportScheduleResponsePrivate(
    UpdateBusinessReportScheduleResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateBusinessReportSchedule response element from \a xml.
 */
void UpdateBusinessReportScheduleResponsePrivate::parseUpdateBusinessReportScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBusinessReportScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
