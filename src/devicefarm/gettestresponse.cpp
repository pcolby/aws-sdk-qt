// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettestresponse.h"
#include "gettestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestResponse
 * \brief The GetTestResponse class provides an interace for DeviceFarm GetTest responses.
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
 * \sa DeviceFarmClient::getTest
 */

/*!
 * Constructs a GetTestResponse object for \a reply to \a request, with parent \a parent.
 */
GetTestResponse::GetTestResponse(
        const GetTestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetTestResponsePrivate(this), parent)
{
    setRequest(new GetTestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTestRequest * GetTestResponse::request() const
{
    Q_D(const GetTestResponse);
    return static_cast<const GetTestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetTest \a response.
 */
void GetTestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetTestResponsePrivate
 * \brief The GetTestResponsePrivate class provides private implementation for GetTestResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestResponsePrivate object with public implementation \a q.
 */
GetTestResponsePrivate::GetTestResponsePrivate(
    GetTestResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetTest response element from \a xml.
 */
void GetTestResponsePrivate::parseGetTestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
