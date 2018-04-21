/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createconfigurationsettrackingoptionsrequest.h"
#include "createconfigurationsettrackingoptionsrequest_p.h"
#include "createconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::CreateConfigurationSetTrackingOptionsRequest
 * \brief The CreateConfigurationSetTrackingOptionsRequest class provides an interface for SES CreateConfigurationSetTrackingOptions requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::createConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetTrackingOptionsRequest::CreateConfigurationSetTrackingOptionsRequest(const CreateConfigurationSetTrackingOptionsRequest &other)
    : SESRequest(new CreateConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsRequest object.
 */
CreateConfigurationSetTrackingOptionsRequest::CreateConfigurationSetTrackingOptionsRequest()
    : SESRequest(new CreateConfigurationSetTrackingOptionsRequestPrivate(SESRequest::CreateConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::SES::CreateConfigurationSetTrackingOptionsRequestPrivate
 * \brief The CreateConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for CreateConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsRequestPrivate object for SES \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetTrackingOptionsRequestPrivate::CreateConfigurationSetTrackingOptionsRequestPrivate(
    const SESRequest::Action action, CreateConfigurationSetTrackingOptionsRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
CreateConfigurationSetTrackingOptionsRequestPrivate::CreateConfigurationSetTrackingOptionsRequestPrivate(
    const CreateConfigurationSetTrackingOptionsRequestPrivate &other, CreateConfigurationSetTrackingOptionsRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
