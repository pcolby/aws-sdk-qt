// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECEIVEMESSAGEREQUEST_H
#define QTAWS_RECEIVEMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class ReceiveMessageRequestPrivate;

class QTAWSSQS_EXPORT ReceiveMessageRequest : public SqsRequest {

public:
    ReceiveMessageRequest(const ReceiveMessageRequest &other);
    ReceiveMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReceiveMessageRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
