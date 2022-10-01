/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getrouteanalysisrequest.h"
#include "getrouteanalysisrequest_p.h"
#include "getrouteanalysisresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetRouteAnalysisRequest
 * \brief The GetRouteAnalysisRequest class provides an interface for NetworkManager GetRouteAnalysis requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getRouteAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
GetRouteAnalysisRequest::GetRouteAnalysisRequest(const GetRouteAnalysisRequest &other)
    : NetworkManagerRequest(new GetRouteAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRouteAnalysisRequest object.
 */
GetRouteAnalysisRequest::GetRouteAnalysisRequest()
    : NetworkManagerRequest(new GetRouteAnalysisRequestPrivate(NetworkManagerRequest::GetRouteAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool GetRouteAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRouteAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRouteAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new GetRouteAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetRouteAnalysisRequestPrivate
 * \brief The GetRouteAnalysisRequestPrivate class provides private implementation for GetRouteAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetRouteAnalysisRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetRouteAnalysisRequestPrivate::GetRouteAnalysisRequestPrivate(
    const NetworkManagerRequest::Action action, GetRouteAnalysisRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRouteAnalysisRequest
 * class' copy constructor.
 */
GetRouteAnalysisRequestPrivate::GetRouteAnalysisRequestPrivate(
    const GetRouteAnalysisRequestPrivate &other, GetRouteAnalysisRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
