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

#include "describefleetmetadataresponse.h"
#include "describefleetmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeFleetMetadataResponse
 * \brief The DescribeFleetMetadataResponse class provides an interace for WorkLink DescribeFleetMetadata responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeFleetMetadata
 */

/*!
 * Constructs a DescribeFleetMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetMetadataResponse::DescribeFleetMetadataResponse(
        const DescribeFleetMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeFleetMetadataResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetMetadataRequest * DescribeFleetMetadataResponse::request() const
{
    return static_cast<const DescribeFleetMetadataRequest *>(WorkLinkResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeFleetMetadata \a response.
 */
void DescribeFleetMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeFleetMetadataResponsePrivate
 * \brief The DescribeFleetMetadataResponsePrivate class provides private implementation for DescribeFleetMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeFleetMetadataResponsePrivate object with public implementation \a q.
 */
DescribeFleetMetadataResponsePrivate::DescribeFleetMetadataResponsePrivate(
    DescribeFleetMetadataResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeFleetMetadata response element from \a xml.
 */
void DescribeFleetMetadataResponsePrivate::parseDescribeFleetMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
