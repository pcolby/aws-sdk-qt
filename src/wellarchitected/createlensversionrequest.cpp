// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlensversionrequest.h"
#include "createlensversionrequest_p.h"
#include "createlensversionresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateLensVersionRequest
 * \brief The CreateLensVersionRequest class provides an interface for WellArchitected CreateLensVersion requests.
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
 * \sa WellArchitectedClient::createLensVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLensVersionRequest::CreateLensVersionRequest(const CreateLensVersionRequest &other)
    : WellArchitectedRequest(new CreateLensVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLensVersionRequest object.
 */
CreateLensVersionRequest::CreateLensVersionRequest()
    : WellArchitectedRequest(new CreateLensVersionRequestPrivate(WellArchitectedRequest::CreateLensVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLensVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLensVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLensVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLensVersionResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::CreateLensVersionRequestPrivate
 * \brief The CreateLensVersionRequestPrivate class provides private implementation for CreateLensVersionRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateLensVersionRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
CreateLensVersionRequestPrivate::CreateLensVersionRequestPrivate(
    const WellArchitectedRequest::Action action, CreateLensVersionRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLensVersionRequest
 * class' copy constructor.
 */
CreateLensVersionRequestPrivate::CreateLensVersionRequestPrivate(
    const CreateLensVersionRequestPrivate &other, CreateLensVersionRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
