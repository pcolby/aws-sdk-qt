// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedevicewithroomresponse.h"
#include "associatedevicewithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomResponse
 * \brief The AssociateDeviceWithRoomResponse class provides an interace for AlexaForBusiness AssociateDeviceWithRoom responses.
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
 * \sa AlexaForBusinessClient::associateDeviceWithRoom
 */

/*!
 * Constructs a AssociateDeviceWithRoomResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDeviceWithRoomResponse::AssociateDeviceWithRoomResponse(
        const AssociateDeviceWithRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateDeviceWithRoomResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDeviceWithRoomRequest * AssociateDeviceWithRoomResponse::request() const
{
    Q_D(const AssociateDeviceWithRoomResponse);
    return static_cast<const AssociateDeviceWithRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateDeviceWithRoom \a response.
 */
void AssociateDeviceWithRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDeviceWithRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithRoomResponsePrivate
 * \brief The AssociateDeviceWithRoomResponsePrivate class provides private implementation for AssociateDeviceWithRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateDeviceWithRoomResponsePrivate object with public implementation \a q.
 */
AssociateDeviceWithRoomResponsePrivate::AssociateDeviceWithRoomResponsePrivate(
    AssociateDeviceWithRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateDeviceWithRoom response element from \a xml.
 */
void AssociateDeviceWithRoomResponsePrivate::parseAssociateDeviceWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
