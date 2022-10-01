// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEREQUEST_H
#define QTAWS_DELETEMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageRequestPrivate;

class QTAWSSQS_EXPORT DeleteMessageRequest : public SqsRequest {

public:
    DeleteMessageRequest(const DeleteMessageRequest &other);
    DeleteMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMessageRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
