// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "claimdeviceresponse.h"
#include "claimdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ClaimDeviceResponse
 * \brief The ClaimDeviceResponse class provides an interace for MediaLive ClaimDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::claimDevice
 */

/*!
 * Constructs a ClaimDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ClaimDeviceResponse::ClaimDeviceResponse(
        const ClaimDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ClaimDeviceResponsePrivate(this), parent)
{
    setRequest(new ClaimDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClaimDeviceRequest * ClaimDeviceResponse::request() const
{
    Q_D(const ClaimDeviceResponse);
    return static_cast<const ClaimDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ClaimDevice \a response.
 */
void ClaimDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClaimDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ClaimDeviceResponsePrivate
 * \brief The ClaimDeviceResponsePrivate class provides private implementation for ClaimDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ClaimDeviceResponsePrivate object with public implementation \a q.
 */
ClaimDeviceResponsePrivate::ClaimDeviceResponsePrivate(
    ClaimDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ClaimDevice response element from \a xml.
 */
void ClaimDeviceResponsePrivate::parseClaimDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClaimDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
