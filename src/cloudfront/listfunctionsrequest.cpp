// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctionsrequest.h"
#include "listfunctionsrequest_p.h"
#include "listfunctionsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFunctionsRequest
 * \brief The ListFunctionsRequest class provides an interface for CloudFront ListFunctions requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFunctions
 */

/*!
 * Constructs a copy of \a other.
 */
ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest &other)
    : CloudFrontRequest(new ListFunctionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFunctionsRequest object.
 */
ListFunctionsRequest::ListFunctionsRequest()
    : CloudFrontRequest(new ListFunctionsRequestPrivate(CloudFrontRequest::ListFunctionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFunctionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFunctionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListFunctionsRequestPrivate
 * \brief The ListFunctionsRequestPrivate class provides private implementation for ListFunctionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListFunctionsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const CloudFrontRequest::Action action, ListFunctionsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionsRequest
 * class' copy constructor.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const ListFunctionsRequestPrivate &other, ListFunctionsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
