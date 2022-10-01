// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGQUEUEREQUEST_H
#define QTAWS_TAGQUEUEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class TagQueueRequestPrivate;

class QTAWSSQS_EXPORT TagQueueRequest : public SqsRequest {

public:
    TagQueueRequest(const TagQueueRequest &other);
    TagQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
