// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateauditstreamconfigurationresponse.h"
#include "updateauditstreamconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateAuditStreamConfigurationResponse
 * \brief The UpdateAuditStreamConfigurationResponse class provides an interace for WorkLink UpdateAuditStreamConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateAuditStreamConfiguration
 */

/*!
 * Constructs a UpdateAuditStreamConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAuditStreamConfigurationResponse::UpdateAuditStreamConfigurationResponse(
        const UpdateAuditStreamConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateAuditStreamConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateAuditStreamConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAuditStreamConfigurationRequest * UpdateAuditStreamConfigurationResponse::request() const
{
    Q_D(const UpdateAuditStreamConfigurationResponse);
    return static_cast<const UpdateAuditStreamConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateAuditStreamConfiguration \a response.
 */
void UpdateAuditStreamConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAuditStreamConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateAuditStreamConfigurationResponsePrivate
 * \brief The UpdateAuditStreamConfigurationResponsePrivate class provides private implementation for UpdateAuditStreamConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateAuditStreamConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateAuditStreamConfigurationResponsePrivate::UpdateAuditStreamConfigurationResponsePrivate(
    UpdateAuditStreamConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateAuditStreamConfiguration response element from \a xml.
 */
void UpdateAuditStreamConfigurationResponsePrivate::parseUpdateAuditStreamConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuditStreamConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
