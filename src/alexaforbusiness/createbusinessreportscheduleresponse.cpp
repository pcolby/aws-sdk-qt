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

#include "createbusinessreportscheduleresponse.h"
#include "createbusinessreportscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateBusinessReportScheduleResponse
 * \brief The CreateBusinessReportScheduleResponse class provides an interace for AlexaForBusiness CreateBusinessReportSchedule responses.
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
 * \sa AlexaForBusinessClient::createBusinessReportSchedule
 */

/*!
 * Constructs a CreateBusinessReportScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBusinessReportScheduleResponse::CreateBusinessReportScheduleResponse(
        const CreateBusinessReportScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateBusinessReportScheduleResponsePrivate(this), parent)
{
    setRequest(new CreateBusinessReportScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBusinessReportScheduleRequest * CreateBusinessReportScheduleResponse::request() const
{
    Q_D(const CreateBusinessReportScheduleResponse);
    return static_cast<const CreateBusinessReportScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateBusinessReportSchedule \a response.
 */
void CreateBusinessReportScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBusinessReportScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateBusinessReportScheduleResponsePrivate
 * \brief The CreateBusinessReportScheduleResponsePrivate class provides private implementation for CreateBusinessReportScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateBusinessReportScheduleResponsePrivate object with public implementation \a q.
 */
CreateBusinessReportScheduleResponsePrivate::CreateBusinessReportScheduleResponsePrivate(
    CreateBusinessReportScheduleResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateBusinessReportSchedule response element from \a xml.
 */
void CreateBusinessReportScheduleResponsePrivate::parseCreateBusinessReportScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBusinessReportScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
