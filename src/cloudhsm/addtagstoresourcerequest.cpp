// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstoresourcerequest.h"
#include "addtagstoresourcerequest_p.h"
#include "addtagstoresourceresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::AddTagsToResourceRequest
 * \brief The AddTagsToResourceRequest class provides an interface for CloudHsm AddTagsToResource requests.
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
 * \sa CloudHsmClient::addTagsToResource
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest(const AddTagsToResourceRequest &other)
    : CloudHsmRequest(new AddTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToResourceRequest object.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest()
    : CloudHsmRequest(new AddTagsToResourceRequestPrivate(CloudHsmRequest::AddTagsToResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::AddTagsToResourceRequestPrivate
 * \brief The AddTagsToResourceRequestPrivate class provides private implementation for AddTagsToResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a AddTagsToResourceRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const CloudHsmRequest::Action action, AddTagsToResourceRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToResourceRequest
 * class' copy constructor.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const AddTagsToResourceRequestPrivate &other, AddTagsToResourceRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
