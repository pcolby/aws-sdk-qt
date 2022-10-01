// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListDevicesResponse
 * \brief The ListDevicesResponse class provides an interace for WorkLink ListDevices responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listDevices
 */

/*!
 * Constructs a ListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink ListDevices \a response.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::ListDevicesResponsePrivate
 * \brief The ListDevicesResponsePrivate class provides private implementation for ListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListDevicesResponsePrivate object with public implementation \a q.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink ListDevices response element from \a xml.
 */
void ListDevicesResponsePrivate::parseListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
