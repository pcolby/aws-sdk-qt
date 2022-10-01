// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestsresponse.h"
#include "listtestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestsResponse
 * \brief The ListTestsResponse class provides an interace for DeviceFarm ListTests responses.
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
 * \sa DeviceFarmClient::listTests
 */

/*!
 * Constructs a ListTestsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestsResponse::ListTestsResponse(
        const ListTestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestsResponsePrivate(this), parent)
{
    setRequest(new ListTestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestsRequest * ListTestsResponse::request() const
{
    Q_D(const ListTestsResponse);
    return static_cast<const ListTestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListTests \a response.
 */
void ListTestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListTestsResponsePrivate
 * \brief The ListTestsResponsePrivate class provides private implementation for ListTestsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestsResponsePrivate object with public implementation \a q.
 */
ListTestsResponsePrivate::ListTestsResponsePrivate(
    ListTestsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListTests response element from \a xml.
 */
void ListTestsResponsePrivate::parseListTestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
