// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuiteresponse.h"
#include "getsuiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteResponse
 * \brief The GetSuiteResponse class provides an interace for DeviceFarm GetSuite responses.
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
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * Constructs a GetSuiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuiteResponse::GetSuiteResponse(
        const GetSuiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetSuiteResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuiteRequest * GetSuiteResponse::request() const
{
    Q_D(const GetSuiteResponse);
    return static_cast<const GetSuiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetSuite \a response.
 */
void GetSuiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetSuiteResponsePrivate
 * \brief The GetSuiteResponsePrivate class provides private implementation for GetSuiteResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetSuiteResponsePrivate object with public implementation \a q.
 */
GetSuiteResponsePrivate::GetSuiteResponsePrivate(
    GetSuiteResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetSuite response element from \a xml.
 */
void GetSuiteResponsePrivate::parseGetSuiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
