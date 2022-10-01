// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationjobrequest.h"
#include "createreplicationjobrequest_p.h"
#include "createreplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::CreateReplicationJobRequest
 * \brief The CreateReplicationJobRequest class provides an interface for Sms CreateReplicationJob requests.
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
 * \sa SmsClient::createReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest(const CreateReplicationJobRequest &other)
    : SmsRequest(new CreateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationJobRequest object.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest()
    : SmsRequest(new CreateReplicationJobRequestPrivate(SmsRequest::CreateReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::CreateReplicationJobRequestPrivate
 * \brief The CreateReplicationJobRequestPrivate class provides private implementation for CreateReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a CreateReplicationJobRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const SmsRequest::Action action, CreateReplicationJobRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationJobRequest
 * class' copy constructor.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const CreateReplicationJobRequestPrivate &other, CreateReplicationJobRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
