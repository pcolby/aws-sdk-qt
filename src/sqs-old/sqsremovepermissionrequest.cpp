// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsremovepermissionrequest.h"
#include "sqsremovepermissionrequest_p.h"
#include "sqsremovepermissionresponse.h"
#include "sqsrequest_p.h"

#define LABEL     QLatin1String("Label")
#define QUEUE_URL QLatin1String("QueueUrl")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsRemovePermissionRequest
 *
 * @brief  Implements SQS RemovePermission requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_RemovePermission.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsRemovePermissionRequest.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 * @param  label     Identification of the permission to remove.
 */
SqsRemovePermissionRequest::SqsRemovePermissionRequest(const QString &queueUrl,
                                                       const QString &label)
    : SqsRequest(new SqsRemovePermissionRequestPrivate(SqsRequest::RemovePermissionAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
}

/**
 * @brief  Constructs a new SqsRemovePermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsRemovePermissionRequest::SqsRemovePermissionRequest(const SqsRemovePermissionRequest &other)
    : SqsRequest(new SqsRemovePermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsRemovePermissionRequest object.
 */
SqsRemovePermissionRequest::SqsRemovePermissionRequest()
    : SqsRequest(new SqsRemovePermissionRequestPrivate(SqsRequest::RemovePermissionAction, this))
{

}

bool SqsRemovePermissionRequest::isValid() const
{
    return ((!queueUrl().isEmpty()) &&
            (!label().isEmpty()));
}

/**
 * @brief  Get the identification of the permission to remove.
 *
 * @return The identification of the permission to remove.
 */
QString SqsRemovePermissionRequest::label() const
{
    return parameter(LABEL).toString();
}

/**
 * @brief  Get the URL of the Amazon SQS queue to take action on.
 *
 * @return The queue URL, or an empty string if not set.
 */
QString SqsRemovePermissionRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Set the identification of the permission to remove.
 *
 * @param  label  The identification of the permission to remove.
 */
void SqsRemovePermissionRequest::setLabel(const QString &label)
{
    setParameter(LABEL, label);
}

/**
 * @brief  Set the URL of the queue to add permissions to.
 *
 * @param  queueUrl  SQS queue URL.
 */
void SqsRemovePermissionRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Construct an SqsRemovePermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsRemovePermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsRemovePermissionRequest::response(QNetworkReply * const reply) const
{
    return new SqsRemovePermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsRemovePermissionRequestPrivate
 *
 * @brief  Private implementation for SqsRemovePermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsRemovePermissionResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsRemovePermissionRequest instance.
 */
SqsRemovePermissionRequestPrivate::SqsRemovePermissionRequestPrivate(
    const SqsRequest::Action action, SqsRemovePermissionRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsRemovePermissionResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsRemovePermissionResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsRemovePermissionRequest instance.
 */
SqsRemovePermissionRequestPrivate::SqsRemovePermissionRequestPrivate(
    const SqsRemovePermissionRequestPrivate &other, SqsRemovePermissionRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
