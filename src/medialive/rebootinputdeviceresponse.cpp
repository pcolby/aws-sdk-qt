// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootinputdeviceresponse.h"
#include "rebootinputdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RebootInputDeviceResponse
 * \brief The RebootInputDeviceResponse class provides an interace for MediaLive RebootInputDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rebootInputDevice
 */

/*!
 * Constructs a RebootInputDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
RebootInputDeviceResponse::RebootInputDeviceResponse(
        const RebootInputDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new RebootInputDeviceResponsePrivate(this), parent)
{
    setRequest(new RebootInputDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootInputDeviceRequest * RebootInputDeviceResponse::request() const
{
    Q_D(const RebootInputDeviceResponse);
    return static_cast<const RebootInputDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive RebootInputDevice \a response.
 */
void RebootInputDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootInputDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::RebootInputDeviceResponsePrivate
 * \brief The RebootInputDeviceResponsePrivate class provides private implementation for RebootInputDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RebootInputDeviceResponsePrivate object with public implementation \a q.
 */
RebootInputDeviceResponsePrivate::RebootInputDeviceResponsePrivate(
    RebootInputDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive RebootInputDevice response element from \a xml.
 */
void RebootInputDeviceResponsePrivate::parseRebootInputDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootInputDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
