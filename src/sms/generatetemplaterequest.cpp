// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatetemplaterequest.h"
#include "generatetemplaterequest_p.h"
#include "generatetemplateresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GenerateTemplateRequest
 * \brief The GenerateTemplateRequest class provides an interface for Sms GenerateTemplate requests.
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
 * \sa SmsClient::generateTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateTemplateRequest::GenerateTemplateRequest(const GenerateTemplateRequest &other)
    : SmsRequest(new GenerateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateTemplateRequest object.
 */
GenerateTemplateRequest::GenerateTemplateRequest()
    : SmsRequest(new GenerateTemplateRequestPrivate(SmsRequest::GenerateTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GenerateTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GenerateTemplateRequestPrivate
 * \brief The GenerateTemplateRequestPrivate class provides private implementation for GenerateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GenerateTemplateRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GenerateTemplateRequestPrivate::GenerateTemplateRequestPrivate(
    const SmsRequest::Action action, GenerateTemplateRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateTemplateRequest
 * class' copy constructor.
 */
GenerateTemplateRequestPrivate::GenerateTemplateRequestPrivate(
    const GenerateTemplateRequestPrivate &other, GenerateTemplateRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
