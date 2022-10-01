// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregistereventtopicrequest.h"
#include "deregistereventtopicrequest_p.h"
#include "deregistereventtopicresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DeregisterEventTopicRequest
 * \brief The DeregisterEventTopicRequest class provides an interface for DirectoryService DeregisterEventTopic requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::deregisterEventTopic
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterEventTopicRequest::DeregisterEventTopicRequest(const DeregisterEventTopicRequest &other)
    : DirectoryServiceRequest(new DeregisterEventTopicRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterEventTopicRequest object.
 */
DeregisterEventTopicRequest::DeregisterEventTopicRequest()
    : DirectoryServiceRequest(new DeregisterEventTopicRequestPrivate(DirectoryServiceRequest::DeregisterEventTopicAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterEventTopicRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterEventTopicResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterEventTopicRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterEventTopicResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::DeregisterEventTopicRequestPrivate
 * \brief The DeregisterEventTopicRequestPrivate class provides private implementation for DeregisterEventTopicRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DeregisterEventTopicRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
DeregisterEventTopicRequestPrivate::DeregisterEventTopicRequestPrivate(
    const DirectoryServiceRequest::Action action, DeregisterEventTopicRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterEventTopicRequest
 * class' copy constructor.
 */
DeregisterEventTopicRequestPrivate::DeregisterEventTopicRequestPrivate(
    const DeregisterEventTopicRequestPrivate &other, DeregisterEventTopicRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
