/*
    Copyright 2013-2019 Paul Colby

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

#include "deletegatewaygroupresponse.h"
#include "deletegatewaygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteGatewayGroupResponse
 * \brief The DeleteGatewayGroupResponse class provides an interace for AlexaForBusiness DeleteGatewayGroup responses.
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
 * \sa AlexaForBusinessClient::deleteGatewayGroup
 */

/*!
 * Constructs a DeleteGatewayGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGatewayGroupResponse::DeleteGatewayGroupResponse(
        const DeleteGatewayGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteGatewayGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGatewayGroupRequest * DeleteGatewayGroupResponse::request() const
{
    Q_D(const DeleteGatewayGroupResponse);
    return static_cast<const DeleteGatewayGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteGatewayGroup \a response.
 */
void DeleteGatewayGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGatewayGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteGatewayGroupResponsePrivate
 * \brief The DeleteGatewayGroupResponsePrivate class provides private implementation for DeleteGatewayGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteGatewayGroupResponsePrivate object with public implementation \a q.
 */
DeleteGatewayGroupResponsePrivate::DeleteGatewayGroupResponsePrivate(
    DeleteGatewayGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteGatewayGroup response element from \a xml.
 */
void DeleteGatewayGroupResponsePrivate::parseDeleteGatewayGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
