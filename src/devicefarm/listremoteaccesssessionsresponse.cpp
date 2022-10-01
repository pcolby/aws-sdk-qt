// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listremoteaccesssessionsresponse.h"
#include "listremoteaccesssessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsResponse
 * \brief The ListRemoteAccessSessionsResponse class provides an interace for DeviceFarm ListRemoteAccessSessions responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listRemoteAccessSessions
 */

/*!
 * Constructs a ListRemoteAccessSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRemoteAccessSessionsResponse::ListRemoteAccessSessionsResponse(
        const ListRemoteAccessSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListRemoteAccessSessionsResponsePrivate(this), parent)
{
    setRequest(new ListRemoteAccessSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRemoteAccessSessionsRequest * ListRemoteAccessSessionsResponse::request() const
{
    Q_D(const ListRemoteAccessSessionsResponse);
    return static_cast<const ListRemoteAccessSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListRemoteAccessSessions \a response.
 */
void ListRemoteAccessSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRemoteAccessSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsResponsePrivate
 * \brief The ListRemoteAccessSessionsResponsePrivate class provides private implementation for ListRemoteAccessSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListRemoteAccessSessionsResponsePrivate object with public implementation \a q.
 */
ListRemoteAccessSessionsResponsePrivate::ListRemoteAccessSessionsResponsePrivate(
    ListRemoteAccessSessionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListRemoteAccessSessions response element from \a xml.
 */
void ListRemoteAccessSessionsResponsePrivate::parseListRemoteAccessSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRemoteAccessSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
