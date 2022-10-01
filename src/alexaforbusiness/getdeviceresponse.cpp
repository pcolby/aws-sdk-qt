// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceResponse
 * \brief The GetDeviceResponse class provides an interace for AlexaForBusiness GetDevice responses.
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
 * \sa AlexaForBusinessClient::getDevice
 */

/*!
 * Constructs a GetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceResponse::GetDeviceResponse(
        const GetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRequest * GetDeviceResponse::request() const
{
    Q_D(const GetDeviceResponse);
    return static_cast<const GetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetDevice \a response.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceResponsePrivate
 * \brief The GetDeviceResponsePrivate class provides private implementation for GetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetDeviceResponsePrivate object with public implementation \a q.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetDevice response element from \a xml.
 */
void GetDeviceResponsePrivate::parseGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
