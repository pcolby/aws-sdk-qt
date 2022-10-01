// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeauditstreamconfigurationresponse.h"
#include "describeauditstreamconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeAuditStreamConfigurationResponse
 * \brief The DescribeAuditStreamConfigurationResponse class provides an interace for WorkLink DescribeAuditStreamConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeAuditStreamConfiguration
 */

/*!
 * Constructs a DescribeAuditStreamConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAuditStreamConfigurationResponse::DescribeAuditStreamConfigurationResponse(
        const DescribeAuditStreamConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeAuditStreamConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeAuditStreamConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAuditStreamConfigurationRequest * DescribeAuditStreamConfigurationResponse::request() const
{
    Q_D(const DescribeAuditStreamConfigurationResponse);
    return static_cast<const DescribeAuditStreamConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeAuditStreamConfiguration \a response.
 */
void DescribeAuditStreamConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAuditStreamConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeAuditStreamConfigurationResponsePrivate
 * \brief The DescribeAuditStreamConfigurationResponsePrivate class provides private implementation for DescribeAuditStreamConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeAuditStreamConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeAuditStreamConfigurationResponsePrivate::DescribeAuditStreamConfigurationResponsePrivate(
    DescribeAuditStreamConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeAuditStreamConfiguration response element from \a xml.
 */
void DescribeAuditStreamConfigurationResponsePrivate::parseDescribeAuditStreamConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAuditStreamConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
