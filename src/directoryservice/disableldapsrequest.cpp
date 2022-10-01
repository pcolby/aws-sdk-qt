// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableldapsrequest.h"
#include "disableldapsrequest_p.h"
#include "disableldapsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DisableLDAPSRequest
 * \brief The DisableLDAPSRequest class provides an interface for DirectoryService DisableLDAPS requests.
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
 * \sa DirectoryServiceClient::disableLDAPS
 */

/*!
 * Constructs a copy of \a other.
 */
DisableLDAPSRequest::DisableLDAPSRequest(const DisableLDAPSRequest &other)
    : DirectoryServiceRequest(new DisableLDAPSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableLDAPSRequest object.
 */
DisableLDAPSRequest::DisableLDAPSRequest()
    : DirectoryServiceRequest(new DisableLDAPSRequestPrivate(DirectoryServiceRequest::DisableLDAPSAction, this))
{

}

/*!
 * \reimp
 */
bool DisableLDAPSRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableLDAPSResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableLDAPSRequest::response(QNetworkReply * const reply) const
{
    return new DisableLDAPSResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::DisableLDAPSRequestPrivate
 * \brief The DisableLDAPSRequestPrivate class provides private implementation for DisableLDAPSRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DisableLDAPSRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
DisableLDAPSRequestPrivate::DisableLDAPSRequestPrivate(
    const DirectoryServiceRequest::Action action, DisableLDAPSRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableLDAPSRequest
 * class' copy constructor.
 */
DisableLDAPSRequestPrivate::DisableLDAPSRequestPrivate(
    const DisableLDAPSRequestPrivate &other, DisableLDAPSRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
