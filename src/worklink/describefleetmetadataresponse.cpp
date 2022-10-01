// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeFleetMetadataResponse);
    return static_cast<const DescribeFleetMetadataRequest *>(d->request);
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
