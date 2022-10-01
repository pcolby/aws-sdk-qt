// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEBATCHREQUEST_H
#define SQSSENDMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageBatchRequestPrivate;

class QTAWS_EXPORT SqsSendMessageBatchRequest : public SqsRequest {

public:
  //SqsSendMessageBatchRequest(...); ///< @todo
    SqsSendMessageBatchRequest(const SqsSendMessageBatchRequest &other);
    SqsSendMessageBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsSendMessageBatchRequest)
    friend class TestSqsSendMessageBatchRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
