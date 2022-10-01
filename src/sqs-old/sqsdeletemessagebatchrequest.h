// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEBATCHREQUEST_H
#define SQSDELETEMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageBatchRequestPrivate;

class QTAWS_EXPORT SqsDeleteMessageBatchRequest : public SqsRequest {

public:
  //SqsDeleteMessageBatchRequest(...); ///< @todo
    SqsDeleteMessageBatchRequest(const SqsDeleteMessageBatchRequest &other);
    SqsDeleteMessageBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageBatchRequest)
    friend class TestSqsDeleteMessageBatchRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
