// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettestgridsessionresponse.h"
#include "gettestgridsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestGridSessionResponse
 * \brief The GetTestGridSessionResponse class provides an interace for DeviceFarm GetTestGridSession responses.
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
 * \sa DeviceFarmClient::getTestGridSession
 */

/*!
 * Constructs a GetTestGridSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetTestGridSessionResponse::GetTestGridSessionResponse(
        const GetTestGridSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetTestGridSessionResponsePrivate(this), parent)
{
    setRequest(new GetTestGridSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTestGridSessionRequest * GetTestGridSessionResponse::request() const
{
    Q_D(const GetTestGridSessionResponse);
    return static_cast<const GetTestGridSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetTestGridSession \a response.
 */
void GetTestGridSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTestGridSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetTestGridSessionResponsePrivate
 * \brief The GetTestGridSessionResponsePrivate class provides private implementation for GetTestGridSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestGridSessionResponsePrivate object with public implementation \a q.
 */
GetTestGridSessionResponsePrivate::GetTestGridSessionResponsePrivate(
    GetTestGridSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetTestGridSession response element from \a xml.
 */
void GetTestGridSessionResponsePrivate::parseGetTestGridSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTestGridSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
