// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEURLREQUEST_H
#define QTAWS_GETQUEUEURLREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class GetQueueUrlRequestPrivate;

class QTAWSSQS_EXPORT GetQueueUrlRequest : public SqsRequest {

public:
    GetQueueUrlRequest(const GetQueueUrlRequest &other);
    GetQueueUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueueUrlRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
