// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportlensrequest.h"
#include "exportlensrequest_p.h"
#include "exportlensresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ExportLensRequest
 * \brief The ExportLensRequest class provides an interface for WellArchitected ExportLens requests.
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
 * \sa WellArchitectedClient::exportLens
 */

/*!
 * Constructs a copy of \a other.
 */
ExportLensRequest::ExportLensRequest(const ExportLensRequest &other)
    : WellArchitectedRequest(new ExportLensRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportLensRequest object.
 */
ExportLensRequest::ExportLensRequest()
    : WellArchitectedRequest(new ExportLensRequestPrivate(WellArchitectedRequest::ExportLensAction, this))
{

}

/*!
 * \reimp
 */
bool ExportLensRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportLensResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportLensRequest::response(QNetworkReply * const reply) const
{
    return new ExportLensResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ExportLensRequestPrivate
 * \brief The ExportLensRequestPrivate class provides private implementation for ExportLensRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ExportLensRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ExportLensRequestPrivate::ExportLensRequestPrivate(
    const WellArchitectedRequest::Action action, ExportLensRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportLensRequest
 * class' copy constructor.
 */
ExportLensRequestPrivate::ExportLensRequestPrivate(
    const ExportLensRequestPrivate &other, ExportLensRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
