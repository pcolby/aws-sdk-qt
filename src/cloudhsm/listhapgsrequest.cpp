// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhapgsrequest.h"
#include "listhapgsrequest_p.h"
#include "listhapgsresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListHapgsRequest
 * \brief The ListHapgsRequest class provides an interface for CloudHsm ListHapgs requests.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::listHapgs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHapgsRequest::ListHapgsRequest(const ListHapgsRequest &other)
    : CloudHsmRequest(new ListHapgsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHapgsRequest object.
 */
ListHapgsRequest::ListHapgsRequest()
    : CloudHsmRequest(new ListHapgsRequestPrivate(CloudHsmRequest::ListHapgsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHapgsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHapgsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHapgsRequest::response(QNetworkReply * const reply) const
{
    return new ListHapgsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::ListHapgsRequestPrivate
 * \brief The ListHapgsRequestPrivate class provides private implementation for ListHapgsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListHapgsRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const CloudHsmRequest::Action action, ListHapgsRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHapgsRequest
 * class' copy constructor.
 */
ListHapgsRequestPrivate::ListHapgsRequestPrivate(
    const ListHapgsRequestPrivate &other, ListHapgsRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
