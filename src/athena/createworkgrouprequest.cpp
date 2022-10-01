// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkgrouprequest.h"
#include "createworkgrouprequest_p.h"
#include "createworkgroupresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::CreateWorkGroupRequest
 * \brief The CreateWorkGroupRequest class provides an interface for Athena CreateWorkGroup requests.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the Amazon Web Services SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::createWorkGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkGroupRequest::CreateWorkGroupRequest(const CreateWorkGroupRequest &other)
    : AthenaRequest(new CreateWorkGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkGroupRequest object.
 */
CreateWorkGroupRequest::CreateWorkGroupRequest()
    : AthenaRequest(new CreateWorkGroupRequestPrivate(AthenaRequest::CreateWorkGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::CreateWorkGroupRequestPrivate
 * \brief The CreateWorkGroupRequestPrivate class provides private implementation for CreateWorkGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a CreateWorkGroupRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
CreateWorkGroupRequestPrivate::CreateWorkGroupRequestPrivate(
    const AthenaRequest::Action action, CreateWorkGroupRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkGroupRequest
 * class' copy constructor.
 */
CreateWorkGroupRequestPrivate::CreateWorkGroupRequestPrivate(
    const CreateWorkGroupRequestPrivate &other, CreateWorkGroupRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
