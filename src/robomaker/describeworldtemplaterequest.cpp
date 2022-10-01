// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldtemplaterequest.h"
#include "describeworldtemplaterequest_p.h"
#include "describeworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateRequest
 * \brief The DescribeWorldTemplateRequest class provides an interface for RoboMaker DescribeWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldTemplateRequest::DescribeWorldTemplateRequest(const DescribeWorldTemplateRequest &other)
    : RoboMakerRequest(new DescribeWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldTemplateRequest object.
 */
DescribeWorldTemplateRequest::DescribeWorldTemplateRequest()
    : RoboMakerRequest(new DescribeWorldTemplateRequestPrivate(RoboMakerRequest::DescribeWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldTemplateRequestPrivate
 * \brief The DescribeWorldTemplateRequestPrivate class provides private implementation for DescribeWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldTemplateRequestPrivate::DescribeWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldTemplateRequest
 * class' copy constructor.
 */
DescribeWorldTemplateRequestPrivate::DescribeWorldTemplateRequestPrivate(
    const DescribeWorldTemplateRequestPrivate &other, DescribeWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
