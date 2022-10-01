// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefleetmetadataresponse.h"
#include "updatefleetmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateFleetMetadataResponse
 * \brief The UpdateFleetMetadataResponse class provides an interace for WorkLink UpdateFleetMetadata responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateFleetMetadata
 */

/*!
 * Constructs a UpdateFleetMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFleetMetadataResponse::UpdateFleetMetadataResponse(
        const UpdateFleetMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateFleetMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFleetMetadataRequest * UpdateFleetMetadataResponse::request() const
{
    Q_D(const UpdateFleetMetadataResponse);
    return static_cast<const UpdateFleetMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateFleetMetadata \a response.
 */
void UpdateFleetMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFleetMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateFleetMetadataResponsePrivate
 * \brief The UpdateFleetMetadataResponsePrivate class provides private implementation for UpdateFleetMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateFleetMetadataResponsePrivate object with public implementation \a q.
 */
UpdateFleetMetadataResponsePrivate::UpdateFleetMetadataResponsePrivate(
    UpdateFleetMetadataResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateFleetMetadata response element from \a xml.
 */
void UpdateFleetMetadataResponsePrivate::parseUpdateFleetMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
