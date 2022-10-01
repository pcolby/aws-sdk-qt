// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestgridsessionactionsresponse.h"
#include "listtestgridsessionactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionActionsResponse
 * \brief The ListTestGridSessionActionsResponse class provides an interace for DeviceFarm ListTestGridSessionActions responses.
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
 * \sa DeviceFarmClient::listTestGridSessionActions
 */

/*!
 * Constructs a ListTestGridSessionActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestGridSessionActionsResponse::ListTestGridSessionActionsResponse(
        const ListTestGridSessionActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestGridSessionActionsResponsePrivate(this), parent)
{
    setRequest(new ListTestGridSessionActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestGridSessionActionsRequest * ListTestGridSessionActionsResponse::request() const
{
    Q_D(const ListTestGridSessionActionsResponse);
    return static_cast<const ListTestGridSessionActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListTestGridSessionActions \a response.
 */
void ListTestGridSessionActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestGridSessionActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionActionsResponsePrivate
 * \brief The ListTestGridSessionActionsResponsePrivate class provides private implementation for ListTestGridSessionActionsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridSessionActionsResponsePrivate object with public implementation \a q.
 */
ListTestGridSessionActionsResponsePrivate::ListTestGridSessionActionsResponsePrivate(
    ListTestGridSessionActionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListTestGridSessionActions response element from \a xml.
 */
void ListTestGridSessionActionsResponsePrivate::parseListTestGridSessionActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestGridSessionActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
