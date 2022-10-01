// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "assumerolewithsamlrequest.h"
#include "assumerolewithsamlrequest_p.h"
#include "assumerolewithsamlresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleWithSAMLRequest
 * \brief The AssumeRoleWithSAMLRequest class provides an interface for Sts AssumeRoleWithSAML requests.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::assumeRoleWithSAML
 */

/*!
 * Constructs a copy of \a other.
 */
AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest(const AssumeRoleWithSAMLRequest &other)
    : StsRequest(new AssumeRoleWithSAMLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssumeRoleWithSAMLRequest object.
 */
AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest()
    : StsRequest(new AssumeRoleWithSAMLRequestPrivate(StsRequest::AssumeRoleWithSAMLAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeRoleWithSAMLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssumeRoleWithSAMLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleWithSAMLRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithSAMLResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::AssumeRoleWithSAMLRequestPrivate
 * \brief The AssumeRoleWithSAMLRequestPrivate class provides private implementation for AssumeRoleWithSAMLRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleWithSAMLRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
AssumeRoleWithSAMLRequestPrivate::AssumeRoleWithSAMLRequestPrivate(
    const StsRequest::Action action, AssumeRoleWithSAMLRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithSAMLRequest
 * class' copy constructor.
 */
AssumeRoleWithSAMLRequestPrivate::AssumeRoleWithSAMLRequestPrivate(
    const AssumeRoleWithSAMLRequestPrivate &other, AssumeRoleWithSAMLRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws
