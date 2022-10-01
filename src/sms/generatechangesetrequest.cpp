// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatechangesetrequest.h"
#include "generatechangesetrequest_p.h"
#include "generatechangesetresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GenerateChangeSetRequest
 * \brief The GenerateChangeSetRequest class provides an interface for Sms GenerateChangeSet requests.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::generateChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateChangeSetRequest::GenerateChangeSetRequest(const GenerateChangeSetRequest &other)
    : SmsRequest(new GenerateChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateChangeSetRequest object.
 */
GenerateChangeSetRequest::GenerateChangeSetRequest()
    : SmsRequest(new GenerateChangeSetRequestPrivate(SmsRequest::GenerateChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new GenerateChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GenerateChangeSetRequestPrivate
 * \brief The GenerateChangeSetRequestPrivate class provides private implementation for GenerateChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GenerateChangeSetRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GenerateChangeSetRequestPrivate::GenerateChangeSetRequestPrivate(
    const SmsRequest::Action action, GenerateChangeSetRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateChangeSetRequest
 * class' copy constructor.
 */
GenerateChangeSetRequestPrivate::GenerateChangeSetRequestPrivate(
    const GenerateChangeSetRequestPrivate &other, GenerateChangeSetRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
