// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceresponse.h"
#include "deletedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceResponse
 * \brief The DeleteDeviceResponse class provides an interace for AlexaForBusiness DeleteDevice responses.
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
 * \sa AlexaForBusinessClient::deleteDevice
 */

/*!
 * Constructs a DeleteDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceResponse::DeleteDeviceResponse(
        const DeleteDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceRequest * DeleteDeviceResponse::request() const
{
    Q_D(const DeleteDeviceResponse);
    return static_cast<const DeleteDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteDevice \a response.
 */
void DeleteDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceResponsePrivate
 * \brief The DeleteDeviceResponsePrivate class provides private implementation for DeleteDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteDeviceResponsePrivate object with public implementation \a q.
 */
DeleteDeviceResponsePrivate::DeleteDeviceResponsePrivate(
    DeleteDeviceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteDevice response element from \a xml.
 */
void DeleteDeviceResponsePrivate::parseDeleteDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
