// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopjobresponse.h"
#include "stopjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopJobResponse
 * \brief The StopJobResponse class provides an interace for DeviceFarm StopJob responses.
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
 * \sa DeviceFarmClient::stopJob
 */

/*!
 * Constructs a StopJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopJobResponse::StopJobResponse(
        const StopJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopJobResponsePrivate(this), parent)
{
    setRequest(new StopJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopJobRequest * StopJobResponse::request() const
{
    Q_D(const StopJobResponse);
    return static_cast<const StopJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm StopJob \a response.
 */
void StopJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::StopJobResponsePrivate
 * \brief The StopJobResponsePrivate class provides private implementation for StopJobResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopJobResponsePrivate object with public implementation \a q.
 */
StopJobResponsePrivate::StopJobResponsePrivate(
    StopJobResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm StopJob response element from \a xml.
 */
void StopJobResponsePrivate::parseStopJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
