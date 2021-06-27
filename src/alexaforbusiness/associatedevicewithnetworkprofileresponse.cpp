/*
    Copyright 2013-2021 Paul Colby

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

#include "associatedevicewithnetworkprofileresponse.h"
#include "associatedevicewithnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithNetworkProfileResponse
 * \brief The AssociateDeviceWithNetworkProfileResponse class provides an interace for AlexaForBusiness AssociateDeviceWithNetworkProfile responses.
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
 * \sa AlexaForBusinessClient::associateDeviceWithNetworkProfile
 */

/*!
 * Constructs a AssociateDeviceWithNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDeviceWithNetworkProfileResponse::AssociateDeviceWithNetworkProfileResponse(
        const AssociateDeviceWithNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateDeviceWithNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDeviceWithNetworkProfileRequest * AssociateDeviceWithNetworkProfileResponse::request() const
{
    return static_cast<const AssociateDeviceWithNetworkProfileRequest *>(AlexaForBusinessResponse::request());
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateDeviceWithNetworkProfile \a response.
 */
void AssociateDeviceWithNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDeviceWithNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateDeviceWithNetworkProfileResponsePrivate
 * \brief The AssociateDeviceWithNetworkProfileResponsePrivate class provides private implementation for AssociateDeviceWithNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateDeviceWithNetworkProfileResponsePrivate object with public implementation \a q.
 */
AssociateDeviceWithNetworkProfileResponsePrivate::AssociateDeviceWithNetworkProfileResponsePrivate(
    AssociateDeviceWithNetworkProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateDeviceWithNetworkProfile response element from \a xml.
 */
void AssociateDeviceWithNetworkProfileResponsePrivate::parseAssociateDeviceWithNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
