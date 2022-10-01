// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateservicelastaccesseddetailsrequest.h"
#include "generateservicelastaccesseddetailsrequest_p.h"
#include "generateservicelastaccesseddetailsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GenerateServiceLastAccessedDetailsRequest
 * \brief The GenerateServiceLastAccessedDetailsRequest class provides an interface for Iam GenerateServiceLastAccessedDetails requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::generateServiceLastAccessedDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateServiceLastAccessedDetailsRequest::GenerateServiceLastAccessedDetailsRequest(const GenerateServiceLastAccessedDetailsRequest &other)
    : IamRequest(new GenerateServiceLastAccessedDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateServiceLastAccessedDetailsRequest object.
 */
GenerateServiceLastAccessedDetailsRequest::GenerateServiceLastAccessedDetailsRequest()
    : IamRequest(new GenerateServiceLastAccessedDetailsRequestPrivate(IamRequest::GenerateServiceLastAccessedDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateServiceLastAccessedDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateServiceLastAccessedDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateServiceLastAccessedDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GenerateServiceLastAccessedDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GenerateServiceLastAccessedDetailsRequestPrivate
 * \brief The GenerateServiceLastAccessedDetailsRequestPrivate class provides private implementation for GenerateServiceLastAccessedDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GenerateServiceLastAccessedDetailsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GenerateServiceLastAccessedDetailsRequestPrivate::GenerateServiceLastAccessedDetailsRequestPrivate(
    const IamRequest::Action action, GenerateServiceLastAccessedDetailsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateServiceLastAccessedDetailsRequest
 * class' copy constructor.
 */
GenerateServiceLastAccessedDetailsRequestPrivate::GenerateServiceLastAccessedDetailsRequestPrivate(
    const GenerateServiceLastAccessedDetailsRequestPrivate &other, GenerateServiceLastAccessedDetailsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
