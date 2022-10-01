// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroomresponse.h"
#include "updateroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomResponse
 * \brief The UpdateRoomResponse class provides an interace for AlexaForBusiness UpdateRoom responses.
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
 * \sa AlexaForBusinessClient::updateRoom
 */

/*!
 * Constructs a UpdateRoomResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoomResponse::UpdateRoomResponse(
        const UpdateRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateRoomResponsePrivate(this), parent)
{
    setRequest(new UpdateRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoomRequest * UpdateRoomResponse::request() const
{
    Q_D(const UpdateRoomResponse);
    return static_cast<const UpdateRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateRoom \a response.
 */
void UpdateRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateRoomResponsePrivate
 * \brief The UpdateRoomResponsePrivate class provides private implementation for UpdateRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateRoomResponsePrivate object with public implementation \a q.
 */
UpdateRoomResponsePrivate::UpdateRoomResponsePrivate(
    UpdateRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateRoom response element from \a xml.
 */
void UpdateRoomResponsePrivate::parseUpdateRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
