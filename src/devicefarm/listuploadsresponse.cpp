// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuploadsresponse.h"
#include "listuploadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUploadsResponse
 * \brief The ListUploadsResponse class provides an interace for DeviceFarm ListUploads responses.
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
 * \sa DeviceFarmClient::listUploads
 */

/*!
 * Constructs a ListUploadsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUploadsResponse::ListUploadsResponse(
        const ListUploadsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListUploadsResponsePrivate(this), parent)
{
    setRequest(new ListUploadsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUploadsRequest * ListUploadsResponse::request() const
{
    Q_D(const ListUploadsResponse);
    return static_cast<const ListUploadsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListUploads \a response.
 */
void ListUploadsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUploadsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListUploadsResponsePrivate
 * \brief The ListUploadsResponsePrivate class provides private implementation for ListUploadsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUploadsResponsePrivate object with public implementation \a q.
 */
ListUploadsResponsePrivate::ListUploadsResponsePrivate(
    ListUploadsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListUploads response element from \a xml.
 */
void ListUploadsResponsePrivate::parseListUploadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUploadsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
