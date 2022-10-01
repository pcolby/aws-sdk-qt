// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourcerequest_p.h"
#include "removetagsfromresourceresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::RemoveTagsFromResourceRequest
 * \brief The RemoveTagsFromResourceRequest class provides an interface for CloudHsm RemoveTagsFromResource requests.
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
 * \sa CloudHsmClient::removeTagsFromResource
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other)
    : CloudHsmRequest(new RemoveTagsFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTagsFromResourceRequest object.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest()
    : CloudHsmRequest(new RemoveTagsFromResourceRequestPrivate(CloudHsmRequest::RemoveTagsFromResourceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsFromResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTagsFromResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::RemoveTagsFromResourceRequestPrivate
 * \brief The RemoveTagsFromResourceRequestPrivate class provides private implementation for RemoveTagsFromResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a RemoveTagsFromResourceRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const CloudHsmRequest::Action action, RemoveTagsFromResourceRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromResourceRequest
 * class' copy constructor.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const RemoveTagsFromResourceRequestPrivate &other, RemoveTagsFromResourceRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
