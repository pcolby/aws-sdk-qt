// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeec2instancelimitsresponse.h"
#include "describeec2instancelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::DescribeEC2InstanceLimitsResponse
 * \brief The DescribeEC2InstanceLimitsResponse class provides an interace for GameLift DescribeEC2InstanceLimits responses.
 *
 * \inmodule QtAwsGameLift
 *
 *  <fullname>GameLift Service</fullname>
 * 
 *  Amazon Web Services provides solutions for hosting session-based multiplayer game servers in the cloud, including tools
 *  for deploying, operating, and scaling game servers. Built on Amazon Web Services global computing infrastructure,
 *  GameLift helps you deliver high-performance, high-reliability, low-cost game servers while dynamically scaling your
 *  resource usage to meet player demand.
 * 
 *  </p
 * 
 *  <b>About GameLift solutions</b>
 * 
 *  </p
 * 
 *  Get more information on these GameLift solutions in the <a
 *  href="https://docs.aws.amazon.com/gamelift/latest/developerguide/">GameLift Developer
 * 
 *  Guide</a>> <ul> <li>
 * 
 *  GameLift managed hosting -- GameLift offers a fully managed service to set up and maintain computing machines for
 *  hosting, manage game session and player session life cycle, and handle security, storage, and performance tracking. You
 *  can use automatic scaling tools to balance player demand and hosting costs, configure your game session management to
 *  minimize player latency, and add FlexMatch for
 * 
 *  matchmaking> </li> <li>
 * 
 *  Managed hosting with Realtime Servers -- With GameLift Realtime Servers, you can quickly configure and set up
 *  ready-to-go game servers for your game. Realtime Servers provides a game server framework with core GameLift
 *  infrastructure already built in. Then use the full range of GameLift managed hosting features, including FlexMatch, for
 *  your
 * 
 *  game> </li> <li>
 * 
 *  GameLift FleetIQ -- Use GameLift FleetIQ as a standalone service while hosting your games using EC2 instances and Auto
 *  Scaling groups. GameLift FleetIQ provides optimizations for game hosting, including boosting the viability of low-cost
 *  Spot Instances gaming. For a complete solution, pair the GameLift FleetIQ and FlexMatch standalone
 * 
 *  services> </li> <li>
 * 
 *  GameLift FlexMatch -- Add matchmaking to your game hosting solution. FlexMatch is a customizable matchmaking service for
 *  multiplayer games. Use FlexMatch as integrated with GameLift managed hosting or incorporate FlexMatch as a standalone
 *  service into your own hosting
 * 
 *  solution> </li> </ul>
 * 
 *  <b>About this API Reference</b>
 * 
 *  </p
 * 
 *  This reference guide describes the low-level service API for Amazon Web Services. With each topic in this guide, you can
 *  find links to language-specific SDK guides and the Amazon Web Services CLI reference. Useful
 * 
 *  links> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html">GameLift API operations
 *  listed by tasks</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html"> GameLift tools and
 *  resources</a>
 *
 * \sa GameLiftClient::describeEC2InstanceLimits
 */

/*!
 * Constructs a DescribeEC2InstanceLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEC2InstanceLimitsResponse::DescribeEC2InstanceLimitsResponse(
        const DescribeEC2InstanceLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeEC2InstanceLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeEC2InstanceLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEC2InstanceLimitsRequest * DescribeEC2InstanceLimitsResponse::request() const
{
    Q_D(const DescribeEC2InstanceLimitsResponse);
    return static_cast<const DescribeEC2InstanceLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameLift DescribeEC2InstanceLimits \a response.
 */
void DescribeEC2InstanceLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEC2InstanceLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameLift::DescribeEC2InstanceLimitsResponsePrivate
 * \brief The DescribeEC2InstanceLimitsResponsePrivate class provides private implementation for DescribeEC2InstanceLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a DescribeEC2InstanceLimitsResponsePrivate object with public implementation \a q.
 */
DescribeEC2InstanceLimitsResponsePrivate::DescribeEC2InstanceLimitsResponsePrivate(
    DescribeEC2InstanceLimitsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/*!
 * Parses a GameLift DescribeEC2InstanceLimits response element from \a xml.
 */
void DescribeEC2InstanceLimitsResponsePrivate::parseDescribeEC2InstanceLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEC2InstanceLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameLift
} // namespace QtAws
