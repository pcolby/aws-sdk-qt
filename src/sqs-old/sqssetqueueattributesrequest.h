// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSETQUEUEATTRIBUTESREQUEST_H
#define SQSSETQUEUEATTRIBUTESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsSetQueueAttributesRequestPrivate;

class QTAWS_EXPORT SqsSetQueueAttributesRequest : public SqsRequest {

public:
  //SqsSetQueueAttributesRequest(...); ///< @todo
    SqsSetQueueAttributesRequest(const SqsSetQueueAttributesRequest &other);
    SqsSetQueueAttributesRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsSetQueueAttributesRequest)
    friend class TestSqsSetQueueAttributesRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
