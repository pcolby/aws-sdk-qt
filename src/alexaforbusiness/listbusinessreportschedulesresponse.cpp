// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbusinessreportschedulesresponse.h"
#include "listbusinessreportschedulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListBusinessReportSchedulesResponse
 * \brief The ListBusinessReportSchedulesResponse class provides an interace for AlexaForBusiness ListBusinessReportSchedules responses.
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
 * \sa AlexaForBusinessClient::listBusinessReportSchedules
 */

/*!
 * Constructs a ListBusinessReportSchedulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBusinessReportSchedulesResponse::ListBusinessReportSchedulesResponse(
        const ListBusinessReportSchedulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListBusinessReportSchedulesResponsePrivate(this), parent)
{
    setRequest(new ListBusinessReportSchedulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBusinessReportSchedulesRequest * ListBusinessReportSchedulesResponse::request() const
{
    Q_D(const ListBusinessReportSchedulesResponse);
    return static_cast<const ListBusinessReportSchedulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListBusinessReportSchedules \a response.
 */
void ListBusinessReportSchedulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBusinessReportSchedulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListBusinessReportSchedulesResponsePrivate
 * \brief The ListBusinessReportSchedulesResponsePrivate class provides private implementation for ListBusinessReportSchedulesResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListBusinessReportSchedulesResponsePrivate object with public implementation \a q.
 */
ListBusinessReportSchedulesResponsePrivate::ListBusinessReportSchedulesResponsePrivate(
    ListBusinessReportSchedulesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListBusinessReportSchedules response element from \a xml.
 */
void ListBusinessReportSchedulesResponsePrivate::parseListBusinessReportSchedulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBusinessReportSchedulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
