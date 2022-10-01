// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrouteanalysisrequest.h"
#include "startrouteanalysisrequest_p.h"
#include "startrouteanalysisresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::StartRouteAnalysisRequest
 * \brief The StartRouteAnalysisRequest class provides an interface for NetworkManager StartRouteAnalysis requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::startRouteAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
StartRouteAnalysisRequest::StartRouteAnalysisRequest(const StartRouteAnalysisRequest &other)
    : NetworkManagerRequest(new StartRouteAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRouteAnalysisRequest object.
 */
StartRouteAnalysisRequest::StartRouteAnalysisRequest()
    : NetworkManagerRequest(new StartRouteAnalysisRequestPrivate(NetworkManagerRequest::StartRouteAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool StartRouteAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRouteAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRouteAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new StartRouteAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::StartRouteAnalysisRequestPrivate
 * \brief The StartRouteAnalysisRequestPrivate class provides private implementation for StartRouteAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a StartRouteAnalysisRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
StartRouteAnalysisRequestPrivate::StartRouteAnalysisRequestPrivate(
    const NetworkManagerRequest::Action action, StartRouteAnalysisRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRouteAnalysisRequest
 * class' copy constructor.
 */
StartRouteAnalysisRequestPrivate::StartRouteAnalysisRequestPrivate(
    const StartRouteAnalysisRequestPrivate &other, StartRouteAnalysisRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
