/*
    Copyright 2013-2020 Paul Colby

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

#include "describedeviceresponse.h"
#include "describedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeDeviceResponse
 * \brief The DescribeDeviceResponse class provides an interace for WorkLink DescribeDevice responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeDevice
 */

/*!
 * Constructs a DescribeDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceResponse::DescribeDeviceResponse(
        const DescribeDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceRequest * DescribeDeviceResponse::request() const
{
    Q_D(const DescribeDeviceResponse);
    return static_cast<const DescribeDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeDevice \a response.
 */
void DescribeDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeDeviceResponsePrivate
 * \brief The DescribeDeviceResponsePrivate class provides private implementation for DescribeDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeDeviceResponsePrivate object with public implementation \a q.
 */
DescribeDeviceResponsePrivate::DescribeDeviceResponsePrivate(
    DescribeDeviceResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeDevice response element from \a xml.
 */
void DescribeDeviceResponsePrivate::parseDescribeDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
