// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_H
#define SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityBatchRequestPrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityBatchRequest : public SqsRequest {

public:
  //SqsChangeMessageVisibilityBatchRequest(...); ///< @todo
    SqsChangeMessageVisibilityBatchRequest(const SqsChangeMessageVisibilityBatchRequest &other);
    SqsChangeMessageVisibilityBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityBatchRequest)
    friend class TestSqsChangeMessageVisibilityBatchRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
