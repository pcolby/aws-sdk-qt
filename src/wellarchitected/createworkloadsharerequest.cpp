// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkloadsharerequest.h"
#include "createworkloadsharerequest_p.h"
#include "createworkloadshareresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareRequest
 * \brief The CreateWorkloadShareRequest class provides an interface for WellArchitected CreateWorkloadShare requests.
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
 * \sa WellArchitectedClient::createWorkloadShare
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkloadShareRequest::CreateWorkloadShareRequest(const CreateWorkloadShareRequest &other)
    : WellArchitectedRequest(new CreateWorkloadShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkloadShareRequest object.
 */
CreateWorkloadShareRequest::CreateWorkloadShareRequest()
    : WellArchitectedRequest(new CreateWorkloadShareRequestPrivate(WellArchitectedRequest::CreateWorkloadShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkloadShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkloadShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkloadShareRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkloadShareResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareRequestPrivate
 * \brief The CreateWorkloadShareRequestPrivate class provides private implementation for CreateWorkloadShareRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateWorkloadShareRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
CreateWorkloadShareRequestPrivate::CreateWorkloadShareRequestPrivate(
    const WellArchitectedRequest::Action action, CreateWorkloadShareRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkloadShareRequest
 * class' copy constructor.
 */
CreateWorkloadShareRequestPrivate::CreateWorkloadShareRequestPrivate(
    const CreateWorkloadShareRequestPrivate &other, CreateWorkloadShareRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
