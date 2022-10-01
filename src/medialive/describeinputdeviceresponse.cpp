// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputdeviceresponse.h"
#include "describeinputdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceResponse
 * \brief The DescribeInputDeviceResponse class provides an interace for MediaLive DescribeInputDevice responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputDevice
 */

/*!
 * Constructs a DescribeInputDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInputDeviceResponse::DescribeInputDeviceResponse(
        const DescribeInputDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeInputDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInputDeviceRequest * DescribeInputDeviceResponse::request() const
{
    Q_D(const DescribeInputDeviceResponse);
    return static_cast<const DescribeInputDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeInputDevice \a response.
 */
void DescribeInputDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInputDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceResponsePrivate
 * \brief The DescribeInputDeviceResponsePrivate class provides private implementation for DescribeInputDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputDeviceResponsePrivate object with public implementation \a q.
 */
DescribeInputDeviceResponsePrivate::DescribeInputDeviceResponsePrivate(
    DescribeInputDeviceResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeInputDevice response element from \a xml.
 */
void DescribeInputDeviceResponsePrivate::parseDescribeInputDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
