// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEBATCHREQUEST_H
#define QTAWS_DELETEMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageBatchRequestPrivate;

class QTAWSSQS_EXPORT DeleteMessageBatchRequest : public SqsRequest {

public:
    DeleteMessageBatchRequest(const DeleteMessageBatchRequest &other);
    DeleteMessageBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMessageBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
