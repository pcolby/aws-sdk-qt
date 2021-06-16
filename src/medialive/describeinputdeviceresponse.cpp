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
