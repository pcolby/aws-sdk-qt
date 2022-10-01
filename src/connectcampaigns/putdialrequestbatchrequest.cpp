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

#include "putdialrequestbatchrequest.h"
#include "putdialrequestbatchrequest_p.h"
#include "putdialrequestbatchresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::PutDialRequestBatchRequest
 * \brief The PutDialRequestBatchRequest class provides an interface for ConnectCampaigns PutDialRequestBatch requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::putDialRequestBatch
 */

/*!
 * Constructs a copy of \a other.
 */
PutDialRequestBatchRequest::PutDialRequestBatchRequest(const PutDialRequestBatchRequest &other)
    : ConnectCampaignsRequest(new PutDialRequestBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDialRequestBatchRequest object.
 */
PutDialRequestBatchRequest::PutDialRequestBatchRequest()
    : ConnectCampaignsRequest(new PutDialRequestBatchRequestPrivate(ConnectCampaignsRequest::PutDialRequestBatchAction, this))
{

}

/*!
 * \reimp
 */
bool PutDialRequestBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDialRequestBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDialRequestBatchRequest::response(QNetworkReply * const reply) const
{
    return new PutDialRequestBatchResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::PutDialRequestBatchRequestPrivate
 * \brief The PutDialRequestBatchRequestPrivate class provides private implementation for PutDialRequestBatchRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a PutDialRequestBatchRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
PutDialRequestBatchRequestPrivate::PutDialRequestBatchRequestPrivate(
    const ConnectCampaignsRequest::Action action, PutDialRequestBatchRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDialRequestBatchRequest
 * class' copy constructor.
 */
PutDialRequestBatchRequestPrivate::PutDialRequestBatchRequestPrivate(
    const PutDialRequestBatchRequestPrivate &other, PutDialRequestBatchRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
