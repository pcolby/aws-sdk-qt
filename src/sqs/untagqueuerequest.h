// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGQUEUEREQUEST_H
#define QTAWS_UNTAGQUEUEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class UntagQueueRequestPrivate;

class QTAWSSQS_EXPORT UntagQueueRequest : public SqsRequest {

public:
    UntagQueueRequest(const UntagQueueRequest &other);
    UntagQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
