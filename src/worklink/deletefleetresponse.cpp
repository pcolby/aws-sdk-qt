// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetresponse.h"
#include "deletefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DeleteFleetResponse
 * \brief The DeleteFleetResponse class provides an interace for WorkLink DeleteFleet responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::deleteFleet
 */

/*!
 * Constructs a DeleteFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetResponse::DeleteFleetResponse(
        const DeleteFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DeleteFleetResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetRequest * DeleteFleetResponse::request() const
{
    Q_D(const DeleteFleetResponse);
    return static_cast<const DeleteFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DeleteFleet \a response.
 */
void DeleteFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DeleteFleetResponsePrivate
 * \brief The DeleteFleetResponsePrivate class provides private implementation for DeleteFleetResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DeleteFleetResponsePrivate object with public implementation \a q.
 */
DeleteFleetResponsePrivate::DeleteFleetResponsePrivate(
    DeleteFleetResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DeleteFleet response element from \a xml.
 */
void DeleteFleetResponsePrivate::parseDeleteFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
