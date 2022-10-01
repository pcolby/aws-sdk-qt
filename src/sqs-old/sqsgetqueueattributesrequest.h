// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEATTRIBUTESREQUEST_H
#define SQSGETQUEUEATTRIBUTESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueAttributesRequestPrivate;

class QTAWS_EXPORT SqsGetQueueAttributesRequest : public SqsRequest {

public:
  //SqsGetQueueAttributesRequest(...); ///< @todo
    SqsGetQueueAttributesRequest(const SqsGetQueueAttributesRequest &other);
    SqsGetQueueAttributesRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsGetQueueAttributesRequest)
    friend class TestSqsGetQueueAttributesRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
