// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuitesresponse.h"
#include "listsuitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSuitesResponse
 * \brief The ListSuitesResponse class provides an interace for DeviceFarm ListSuites responses.
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
 * \sa DeviceFarmClient::listSuites
 */

/*!
 * Constructs a ListSuitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSuitesResponse::ListSuitesResponse(
        const ListSuitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListSuitesResponsePrivate(this), parent)
{
    setRequest(new ListSuitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSuitesRequest * ListSuitesResponse::request() const
{
    Q_D(const ListSuitesResponse);
    return static_cast<const ListSuitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListSuites \a response.
 */
void ListSuitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSuitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListSuitesResponsePrivate
 * \brief The ListSuitesResponsePrivate class provides private implementation for ListSuitesResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSuitesResponsePrivate object with public implementation \a q.
 */
ListSuitesResponsePrivate::ListSuitesResponsePrivate(
    ListSuitesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListSuites response element from \a xml.
 */
void ListSuitesResponsePrivate::parseListSuitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
