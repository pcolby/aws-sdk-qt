// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvocabularyrequest.h"
#include "createvocabularyrequest_p.h"
#include "createvocabularyresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::CreateVocabularyRequest
 * \brief The CreateVocabularyRequest class provides an interface for Connect CreateVocabulary requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::createVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVocabularyRequest::CreateVocabularyRequest(const CreateVocabularyRequest &other)
    : ConnectRequest(new CreateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVocabularyRequest object.
 */
CreateVocabularyRequest::CreateVocabularyRequest()
    : ConnectRequest(new CreateVocabularyRequestPrivate(ConnectRequest::CreateVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new CreateVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::CreateVocabularyRequestPrivate
 * \brief The CreateVocabularyRequestPrivate class provides private implementation for CreateVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a CreateVocabularyRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const ConnectRequest::Action action, CreateVocabularyRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVocabularyRequest
 * class' copy constructor.
 */
CreateVocabularyRequestPrivate::CreateVocabularyRequestPrivate(
    const CreateVocabularyRequestPrivate &other, CreateVocabularyRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
