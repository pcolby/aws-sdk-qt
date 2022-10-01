// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodesrequest.h"
#include "listnodesrequest_p.h"
#include "listnodesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListNodesRequest
 * \brief The ListNodesRequest class provides an interface for Panorama ListNodes requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listNodes
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodesRequest::ListNodesRequest(const ListNodesRequest &other)
    : PanoramaRequest(new ListNodesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodesRequest object.
 */
ListNodesRequest::ListNodesRequest()
    : PanoramaRequest(new ListNodesRequestPrivate(PanoramaRequest::ListNodesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodesRequest::response(QNetworkReply * const reply) const
{
    return new ListNodesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListNodesRequestPrivate
 * \brief The ListNodesRequestPrivate class provides private implementation for ListNodesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListNodesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const PanoramaRequest::Action action, ListNodesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodesRequest
 * class' copy constructor.
 */
ListNodesRequestPrivate::ListNodesRequestPrivate(
    const ListNodesRequestPrivate &other, ListNodesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
