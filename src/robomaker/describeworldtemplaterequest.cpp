/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
