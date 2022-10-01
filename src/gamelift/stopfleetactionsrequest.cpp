// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopfleetactionsrequest.h"
#include "stopfleetactionsrequest_p.h"
#include "stopfleetactionsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::StopFleetActionsRequest
 * \brief The StopFleetActionsRequest class provides an interface for GameLift StopFleetActions requests.
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
 * \sa GameLiftClient::stopFleetActions
 */

/*!
 * Constructs a copy of \a other.
 */
StopFleetActionsRequest::StopFleetActionsRequest(const StopFleetActionsRequest &other)
    : GameLiftRequest(new StopFleetActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFleetActionsRequest object.
 */
StopFleetActionsRequest::StopFleetActionsRequest()
    : GameLiftRequest(new StopFleetActionsRequestPrivate(GameLiftRequest::StopFleetActionsAction, this))
{

}

/*!
 * \reimp
 */
bool StopFleetActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFleetActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFleetActionsRequest::response(QNetworkReply * const reply) const
{
    return new StopFleetActionsResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::StopFleetActionsRequestPrivate
 * \brief The StopFleetActionsRequestPrivate class provides private implementation for StopFleetActionsRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a StopFleetActionsRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
StopFleetActionsRequestPrivate::StopFleetActionsRequestPrivate(
    const GameLiftRequest::Action action, StopFleetActionsRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFleetActionsRequest
 * class' copy constructor.
 */
StopFleetActionsRequestPrivate::StopFleetActionsRequestPrivate(
    const StopFleetActionsRequestPrivate &other, StopFleetActionsRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
