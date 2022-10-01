// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrustrequest.h"
#include "updatetrustrequest_p.h"
#include "updatetrustresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::UpdateTrustRequest
 * \brief The UpdateTrustRequest class provides an interface for DirectoryService UpdateTrust requests.
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
 * \sa DirectoryServiceClient::updateTrust
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrustRequest::UpdateTrustRequest(const UpdateTrustRequest &other)
    : DirectoryServiceRequest(new UpdateTrustRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrustRequest object.
 */
UpdateTrustRequest::UpdateTrustRequest()
    : DirectoryServiceRequest(new UpdateTrustRequestPrivate(DirectoryServiceRequest::UpdateTrustAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrustRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrustResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrustRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrustResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::UpdateTrustRequestPrivate
 * \brief The UpdateTrustRequestPrivate class provides private implementation for UpdateTrustRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a UpdateTrustRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
UpdateTrustRequestPrivate::UpdateTrustRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateTrustRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrustRequest
 * class' copy constructor.
 */
UpdateTrustRequestPrivate::UpdateTrustRequestPrivate(
    const UpdateTrustRequestPrivate &other, UpdateTrustRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
