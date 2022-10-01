// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRECEIVEMESSAGEREQUEST_H
#define SQSRECEIVEMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageRequestPrivate;

class QTAWS_EXPORT SqsReceiveMessageRequest : public SqsRequest {

public:
  //SqsReceiveMessageRequest(...); ///< @todo
    SqsReceiveMessageRequest(const SqsReceiveMessageRequest &other);
    SqsReceiveMessageRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsReceiveMessageRequest)
    friend class TestSqsReceiveMessageRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
