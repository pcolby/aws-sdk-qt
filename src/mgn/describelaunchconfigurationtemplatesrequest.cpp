// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelaunchconfigurationtemplatesrequest.h"
#include "describelaunchconfigurationtemplatesrequest_p.h"
#include "describelaunchconfigurationtemplatesresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeLaunchConfigurationTemplatesRequest
 * \brief The DescribeLaunchConfigurationTemplatesRequest class provides an interface for Mgn DescribeLaunchConfigurationTemplates requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeLaunchConfigurationTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLaunchConfigurationTemplatesRequest::DescribeLaunchConfigurationTemplatesRequest(const DescribeLaunchConfigurationTemplatesRequest &other)
    : MgnRequest(new DescribeLaunchConfigurationTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLaunchConfigurationTemplatesRequest object.
 */
DescribeLaunchConfigurationTemplatesRequest::DescribeLaunchConfigurationTemplatesRequest()
    : MgnRequest(new DescribeLaunchConfigurationTemplatesRequestPrivate(MgnRequest::DescribeLaunchConfigurationTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLaunchConfigurationTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLaunchConfigurationTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLaunchConfigurationTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLaunchConfigurationTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DescribeLaunchConfigurationTemplatesRequestPrivate
 * \brief The DescribeLaunchConfigurationTemplatesRequestPrivate class provides private implementation for DescribeLaunchConfigurationTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeLaunchConfigurationTemplatesRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeLaunchConfigurationTemplatesRequestPrivate::DescribeLaunchConfigurationTemplatesRequestPrivate(
    const MgnRequest::Action action, DescribeLaunchConfigurationTemplatesRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLaunchConfigurationTemplatesRequest
 * class' copy constructor.
 */
DescribeLaunchConfigurationTemplatesRequestPrivate::DescribeLaunchConfigurationTemplatesRequestPrivate(
    const DescribeLaunchConfigurationTemplatesRequestPrivate &other, DescribeLaunchConfigurationTemplatesRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
