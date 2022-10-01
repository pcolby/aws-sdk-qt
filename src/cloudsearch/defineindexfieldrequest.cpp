// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "defineindexfieldrequest.h"
#include "defineindexfieldrequest_p.h"
#include "defineindexfieldresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineIndexFieldRequest
 * \brief The DefineIndexFieldRequest class provides an interface for CloudSearch DefineIndexField requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::defineIndexField
 */

/*!
 * Constructs a copy of \a other.
 */
DefineIndexFieldRequest::DefineIndexFieldRequest(const DefineIndexFieldRequest &other)
    : CloudSearchRequest(new DefineIndexFieldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DefineIndexFieldRequest object.
 */
DefineIndexFieldRequest::DefineIndexFieldRequest()
    : CloudSearchRequest(new DefineIndexFieldRequestPrivate(CloudSearchRequest::DefineIndexFieldAction, this))
{

}

/*!
 * \reimp
 */
bool DefineIndexFieldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DefineIndexFieldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DefineIndexFieldRequest::response(QNetworkReply * const reply) const
{
    return new DefineIndexFieldResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DefineIndexFieldRequestPrivate
 * \brief The DefineIndexFieldRequestPrivate class provides private implementation for DefineIndexFieldRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineIndexFieldRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DefineIndexFieldRequestPrivate::DefineIndexFieldRequestPrivate(
    const CloudSearchRequest::Action action, DefineIndexFieldRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DefineIndexFieldRequest
 * class' copy constructor.
 */
DefineIndexFieldRequestPrivate::DefineIndexFieldRequestPrivate(
    const DefineIndexFieldRequestPrivate &other, DefineIndexFieldRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
