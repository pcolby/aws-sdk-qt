// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationrequest.h"
#include "createapplicationrequest_p.h"
#include "createapplicationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationRequest
 * \brief The CreateApplicationRequest class provides an interface for KinesisAnalyticsV2 CreateApplication requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::createApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationRequest::CreateApplicationRequest(const CreateApplicationRequest &other)
    : KinesisAnalyticsV2Request(new CreateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationRequest object.
 */
CreateApplicationRequest::CreateApplicationRequest()
    : KinesisAnalyticsV2Request(new CreateApplicationRequestPrivate(KinesisAnalyticsV2Request::CreateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::CreateApplicationRequestPrivate
 * \brief The CreateApplicationRequestPrivate class provides private implementation for CreateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a CreateApplicationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, CreateApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationRequest
 * class' copy constructor.
 */
CreateApplicationRequestPrivate::CreateApplicationRequestPrivate(
    const CreateApplicationRequestPrivate &other, CreateApplicationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
