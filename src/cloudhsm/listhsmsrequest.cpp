// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhsmsrequest.h"
#include "listhsmsrequest_p.h"
#include "listhsmsresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListHsmsRequest
 * \brief The ListHsmsRequest class provides an interface for CloudHsm ListHsms requests.
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
 * \sa CloudHsmClient::listHsms
 */

/*!
 * Constructs a copy of \a other.
 */
ListHsmsRequest::ListHsmsRequest(const ListHsmsRequest &other)
    : CloudHsmRequest(new ListHsmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHsmsRequest object.
 */
ListHsmsRequest::ListHsmsRequest()
    : CloudHsmRequest(new ListHsmsRequestPrivate(CloudHsmRequest::ListHsmsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHsmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHsmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHsmsRequest::response(QNetworkReply * const reply) const
{
    return new ListHsmsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::ListHsmsRequestPrivate
 * \brief The ListHsmsRequestPrivate class provides private implementation for ListHsmsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListHsmsRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const CloudHsmRequest::Action action, ListHsmsRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHsmsRequest
 * class' copy constructor.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const ListHsmsRequestPrivate &other, ListHsmsRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
