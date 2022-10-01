// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeidentityproviderconfigurationresponse.h"
#include "describeidentityproviderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeIdentityProviderConfigurationResponse
 * \brief The DescribeIdentityProviderConfigurationResponse class provides an interace for WorkLink DescribeIdentityProviderConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeIdentityProviderConfiguration
 */

/*!
 * Constructs a DescribeIdentityProviderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIdentityProviderConfigurationResponse::DescribeIdentityProviderConfigurationResponse(
        const DescribeIdentityProviderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeIdentityProviderConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityProviderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIdentityProviderConfigurationRequest * DescribeIdentityProviderConfigurationResponse::request() const
{
    Q_D(const DescribeIdentityProviderConfigurationResponse);
    return static_cast<const DescribeIdentityProviderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeIdentityProviderConfiguration \a response.
 */
void DescribeIdentityProviderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIdentityProviderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeIdentityProviderConfigurationResponsePrivate
 * \brief The DescribeIdentityProviderConfigurationResponsePrivate class provides private implementation for DescribeIdentityProviderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeIdentityProviderConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeIdentityProviderConfigurationResponsePrivate::DescribeIdentityProviderConfigurationResponsePrivate(
    DescribeIdentityProviderConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeIdentityProviderConfiguration response element from \a xml.
 */
void DescribeIdentityProviderConfigurationResponsePrivate::parseDescribeIdentityProviderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityProviderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
