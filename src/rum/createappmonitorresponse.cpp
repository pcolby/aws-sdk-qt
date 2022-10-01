// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappmonitorresponse.h"
#include "createappmonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::CreateAppMonitorResponse
 * \brief The CreateAppMonitorResponse class provides an interace for Rum CreateAppMonitor responses.
 *
 * \inmodule QtAwsRum
 *
 *  With Amazon CloudWatch RUM, you can perform real-user monitoring to collect client-side data about your web application
 *  performance from actual user sessions in real time. The data collected includes page load times, client-side errors, and
 *  user behavior. When you view this data, you can see it all aggregated together and also see breakdowns by the browsers
 *  and devices that your customers
 * 
 *  use>
 * 
 *  You can use the collected data to quickly identify and debug client-side performance issues. CloudWatch RUM helps you
 *  visualize anomalies in your application performance and find relevant debugging data such as error messages, stack
 *  traces, and user sessions. You can also use RUM to understand the range of end-user impact including the number of
 *  users, geolocations, and browsers
 *
 * \sa RumClient::createAppMonitor
 */

/*!
 * Constructs a CreateAppMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAppMonitorResponse::CreateAppMonitorResponse(
        const CreateAppMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new CreateAppMonitorResponsePrivate(this), parent)
{
    setRequest(new CreateAppMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAppMonitorRequest * CreateAppMonitorResponse::request() const
{
    Q_D(const CreateAppMonitorResponse);
    return static_cast<const CreateAppMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum CreateAppMonitor \a response.
 */
void CreateAppMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAppMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::CreateAppMonitorResponsePrivate
 * \brief The CreateAppMonitorResponsePrivate class provides private implementation for CreateAppMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a CreateAppMonitorResponsePrivate object with public implementation \a q.
 */
CreateAppMonitorResponsePrivate::CreateAppMonitorResponsePrivate(
    CreateAppMonitorResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum CreateAppMonitor response element from \a xml.
 */
void CreateAppMonitorResponsePrivate::parseCreateAppMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
