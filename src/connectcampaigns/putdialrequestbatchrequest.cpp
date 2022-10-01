// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
