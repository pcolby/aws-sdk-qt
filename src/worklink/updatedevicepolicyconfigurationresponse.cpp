// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicepolicyconfigurationresponse.h"
#include "updatedevicepolicyconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationResponse
 * \brief The UpdateDevicePolicyConfigurationResponse class provides an interace for WorkLink UpdateDevicePolicyConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateDevicePolicyConfiguration
 */

/*!
 * Constructs a UpdateDevicePolicyConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevicePolicyConfigurationResponse::UpdateDevicePolicyConfigurationResponse(
        const UpdateDevicePolicyConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateDevicePolicyConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicePolicyConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevicePolicyConfigurationRequest * UpdateDevicePolicyConfigurationResponse::request() const
{
    Q_D(const UpdateDevicePolicyConfigurationResponse);
    return static_cast<const UpdateDevicePolicyConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateDevicePolicyConfiguration \a response.
 */
void UpdateDevicePolicyConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevicePolicyConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationResponsePrivate
 * \brief The UpdateDevicePolicyConfigurationResponsePrivate class provides private implementation for UpdateDevicePolicyConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateDevicePolicyConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateDevicePolicyConfigurationResponsePrivate::UpdateDevicePolicyConfigurationResponsePrivate(
    UpdateDevicePolicyConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateDevicePolicyConfiguration response element from \a xml.
 */
void UpdateDevicePolicyConfigurationResponsePrivate::parseUpdateDevicePolicyConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicePolicyConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
