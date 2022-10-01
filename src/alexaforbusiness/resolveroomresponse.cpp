// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resolveroomresponse.h"
#include "resolveroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ResolveRoomResponse
 * \brief The ResolveRoomResponse class provides an interace for AlexaForBusiness ResolveRoom responses.
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
 * \sa AlexaForBusinessClient::resolveRoom
 */

/*!
 * Constructs a ResolveRoomResponse object for \a reply to \a request, with parent \a parent.
 */
ResolveRoomResponse::ResolveRoomResponse(
        const ResolveRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ResolveRoomResponsePrivate(this), parent)
{
    setRequest(new ResolveRoomRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResolveRoomRequest * ResolveRoomResponse::request() const
{
    Q_D(const ResolveRoomResponse);
    return static_cast<const ResolveRoomRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ResolveRoom \a response.
 */
void ResolveRoomResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResolveRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ResolveRoomResponsePrivate
 * \brief The ResolveRoomResponsePrivate class provides private implementation for ResolveRoomResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ResolveRoomResponsePrivate object with public implementation \a q.
 */
ResolveRoomResponsePrivate::ResolveRoomResponsePrivate(
    ResolveRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ResolveRoom response element from \a xml.
 */
void ResolveRoomResponsePrivate::parseResolveRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveRoomResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
