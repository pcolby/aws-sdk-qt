// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettelemetrymetadatarequest.h"
#include "gettelemetrymetadatarequest_p.h"
#include "gettelemetrymetadataresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataRequest
 * \brief The GetTelemetryMetadataRequest class provides an interface for Inspector GetTelemetryMetadata requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getTelemetryMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetTelemetryMetadataRequest::GetTelemetryMetadataRequest(const GetTelemetryMetadataRequest &other)
    : InspectorRequest(new GetTelemetryMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTelemetryMetadataRequest object.
 */
GetTelemetryMetadataRequest::GetTelemetryMetadataRequest()
    : InspectorRequest(new GetTelemetryMetadataRequestPrivate(InspectorRequest::GetTelemetryMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetTelemetryMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTelemetryMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTelemetryMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetTelemetryMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::GetTelemetryMetadataRequestPrivate
 * \brief The GetTelemetryMetadataRequestPrivate class provides private implementation for GetTelemetryMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetTelemetryMetadataRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
GetTelemetryMetadataRequestPrivate::GetTelemetryMetadataRequestPrivate(
    const InspectorRequest::Action action, GetTelemetryMetadataRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTelemetryMetadataRequest
 * class' copy constructor.
 */
GetTelemetryMetadataRequestPrivate::GetTelemetryMetadataRequestPrivate(
    const GetTelemetryMetadataRequestPrivate &other, GetTelemetryMetadataRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
