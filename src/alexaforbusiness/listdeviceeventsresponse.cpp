// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceeventsresponse.h"
#include "listdeviceeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListDeviceEventsResponse
 * \brief The ListDeviceEventsResponse class provides an interace for AlexaForBusiness ListDeviceEvents responses.
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
 * \sa AlexaForBusinessClient::listDeviceEvents
 */

/*!
 * Constructs a ListDeviceEventsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceEventsResponse::ListDeviceEventsResponse(
        const ListDeviceEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListDeviceEventsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceEventsRequest * ListDeviceEventsResponse::request() const
{
    Q_D(const ListDeviceEventsResponse);
    return static_cast<const ListDeviceEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListDeviceEvents \a response.
 */
void ListDeviceEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListDeviceEventsResponsePrivate
 * \brief The ListDeviceEventsResponsePrivate class provides private implementation for ListDeviceEventsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListDeviceEventsResponsePrivate object with public implementation \a q.
 */
ListDeviceEventsResponsePrivate::ListDeviceEventsResponsePrivate(
    ListDeviceEventsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListDeviceEvents response element from \a xml.
 */
void ListDeviceEventsResponsePrivate::parseListDeviceEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
