// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURGEQUEUEREQUEST_H
#define QTAWS_PURGEQUEUEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class PurgeQueueRequestPrivate;

class QTAWSSQS_EXPORT PurgeQueueRequest : public SqsRequest {

public:
    PurgeQueueRequest(const PurgeQueueRequest &other);
    PurgeQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PurgeQueueRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
