// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenodefromtemplatejobrequest.h"
#include "describenodefromtemplatejobrequest_p.h"
#include "describenodefromtemplatejobresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeNodeFromTemplateJobRequest
 * \brief The DescribeNodeFromTemplateJobRequest class provides an interface for Panorama DescribeNodeFromTemplateJob requests.
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
 * \sa PanoramaClient::describeNodeFromTemplateJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNodeFromTemplateJobRequest::DescribeNodeFromTemplateJobRequest(const DescribeNodeFromTemplateJobRequest &other)
    : PanoramaRequest(new DescribeNodeFromTemplateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNodeFromTemplateJobRequest object.
 */
DescribeNodeFromTemplateJobRequest::DescribeNodeFromTemplateJobRequest()
    : PanoramaRequest(new DescribeNodeFromTemplateJobRequestPrivate(PanoramaRequest::DescribeNodeFromTemplateJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNodeFromTemplateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNodeFromTemplateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNodeFromTemplateJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNodeFromTemplateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeNodeFromTemplateJobRequestPrivate
 * \brief The DescribeNodeFromTemplateJobRequestPrivate class provides private implementation for DescribeNodeFromTemplateJobRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeNodeFromTemplateJobRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeNodeFromTemplateJobRequestPrivate::DescribeNodeFromTemplateJobRequestPrivate(
    const PanoramaRequest::Action action, DescribeNodeFromTemplateJobRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNodeFromTemplateJobRequest
 * class' copy constructor.
 */
DescribeNodeFromTemplateJobRequestPrivate::DescribeNodeFromTemplateJobRequestPrivate(
    const DescribeNodeFromTemplateJobRequestPrivate &other, DescribeNodeFromTemplateJobRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
