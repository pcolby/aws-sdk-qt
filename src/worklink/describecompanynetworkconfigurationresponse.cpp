// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecompanynetworkconfigurationresponse.h"
#include "describecompanynetworkconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeCompanyNetworkConfigurationResponse
 * \brief The DescribeCompanyNetworkConfigurationResponse class provides an interace for WorkLink DescribeCompanyNetworkConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeCompanyNetworkConfiguration
 */

/*!
 * Constructs a DescribeCompanyNetworkConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCompanyNetworkConfigurationResponse::DescribeCompanyNetworkConfigurationResponse(
        const DescribeCompanyNetworkConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeCompanyNetworkConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeCompanyNetworkConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCompanyNetworkConfigurationRequest * DescribeCompanyNetworkConfigurationResponse::request() const
{
    Q_D(const DescribeCompanyNetworkConfigurationResponse);
    return static_cast<const DescribeCompanyNetworkConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeCompanyNetworkConfiguration \a response.
 */
void DescribeCompanyNetworkConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCompanyNetworkConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeCompanyNetworkConfigurationResponsePrivate
 * \brief The DescribeCompanyNetworkConfigurationResponsePrivate class provides private implementation for DescribeCompanyNetworkConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeCompanyNetworkConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeCompanyNetworkConfigurationResponsePrivate::DescribeCompanyNetworkConfigurationResponsePrivate(
    DescribeCompanyNetworkConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeCompanyNetworkConfiguration response element from \a xml.
 */
void DescribeCompanyNetworkConfigurationResponsePrivate::parseDescribeCompanyNetworkConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCompanyNetworkConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
