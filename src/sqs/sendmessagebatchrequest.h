// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEBATCHREQUEST_H
#define QTAWS_SENDMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class SendMessageBatchRequestPrivate;

class QTAWSSQS_EXPORT SendMessageBatchRequest : public SqsRequest {

public:
    SendMessageBatchRequest(const SendMessageBatchRequest &other);
    SendMessageBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessageBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
