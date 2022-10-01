// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkloadrequest.h"
#include "createworkloadrequest_p.h"
#include "createworkloadresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateWorkloadRequest
 * \brief The CreateWorkloadRequest class provides an interface for WellArchitected CreateWorkload requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::createWorkload
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkloadRequest::CreateWorkloadRequest(const CreateWorkloadRequest &other)
    : WellArchitectedRequest(new CreateWorkloadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkloadRequest object.
 */
CreateWorkloadRequest::CreateWorkloadRequest()
    : WellArchitectedRequest(new CreateWorkloadRequestPrivate(WellArchitectedRequest::CreateWorkloadAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkloadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkloadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkloadRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkloadResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::CreateWorkloadRequestPrivate
 * \brief The CreateWorkloadRequestPrivate class provides private implementation for CreateWorkloadRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateWorkloadRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
CreateWorkloadRequestPrivate::CreateWorkloadRequestPrivate(
    const WellArchitectedRequest::Action action, CreateWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkloadRequest
 * class' copy constructor.
 */
CreateWorkloadRequestPrivate::CreateWorkloadRequestPrivate(
    const CreateWorkloadRequestPrivate &other, CreateWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
