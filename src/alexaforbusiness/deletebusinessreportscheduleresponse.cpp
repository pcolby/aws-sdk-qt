// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebusinessreportscheduleresponse.h"
#include "deletebusinessreportscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteBusinessReportScheduleResponse
 * \brief The DeleteBusinessReportScheduleResponse class provides an interace for AlexaForBusiness DeleteBusinessReportSchedule responses.
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
 * \sa AlexaForBusinessClient::deleteBusinessReportSchedule
 */

/*!
 * Constructs a DeleteBusinessReportScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBusinessReportScheduleResponse::DeleteBusinessReportScheduleResponse(
        const DeleteBusinessReportScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteBusinessReportScheduleResponsePrivate(this), parent)
{
    setRequest(new DeleteBusinessReportScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBusinessReportScheduleRequest * DeleteBusinessReportScheduleResponse::request() const
{
    Q_D(const DeleteBusinessReportScheduleResponse);
    return static_cast<const DeleteBusinessReportScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteBusinessReportSchedule \a response.
 */
void DeleteBusinessReportScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBusinessReportScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteBusinessReportScheduleResponsePrivate
 * \brief The DeleteBusinessReportScheduleResponsePrivate class provides private implementation for DeleteBusinessReportScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteBusinessReportScheduleResponsePrivate object with public implementation \a q.
 */
DeleteBusinessReportScheduleResponsePrivate::DeleteBusinessReportScheduleResponsePrivate(
    DeleteBusinessReportScheduleResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteBusinessReportSchedule response element from \a xml.
 */
void DeleteBusinessReportScheduleResponsePrivate::parseDeleteBusinessReportScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBusinessReportScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
