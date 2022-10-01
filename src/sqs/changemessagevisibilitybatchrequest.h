// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYBATCHREQUEST_H
#define QTAWS_CHANGEMESSAGEVISIBILITYBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityBatchRequestPrivate;

class QTAWSSQS_EXPORT ChangeMessageVisibilityBatchRequest : public SqsRequest {

public:
    ChangeMessageVisibilityBatchRequest(const ChangeMessageVisibilityBatchRequest &other);
    ChangeMessageVisibilityBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeMessageVisibilityBatchRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
