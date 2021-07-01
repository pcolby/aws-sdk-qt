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

#include "createnetworkprofileresponse.h"
#include "createnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateNetworkProfileResponse
 * \brief The CreateNetworkProfileResponse class provides an interace for AlexaForBusiness CreateNetworkProfile responses.
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
 * \sa AlexaForBusinessClient::createNetworkProfile
 */

/*!
 * Constructs a CreateNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkProfileResponse::CreateNetworkProfileResponse(
        const CreateNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkProfileRequest * CreateNetworkProfileResponse::request() const
{
    Q_D(const CreateNetworkProfileResponse);
    return static_cast<const CreateNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateNetworkProfile \a response.
 */
void CreateNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateNetworkProfileResponsePrivate
 * \brief The CreateNetworkProfileResponsePrivate class provides private implementation for CreateNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateNetworkProfileResponsePrivate object with public implementation \a q.
 */
CreateNetworkProfileResponsePrivate::CreateNetworkProfileResponsePrivate(
    CreateNetworkProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateNetworkProfile response element from \a xml.
 */
void CreateNetworkProfileResponsePrivate::parseCreateNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
