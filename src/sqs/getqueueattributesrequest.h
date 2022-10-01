// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEATTRIBUTESREQUEST_H
#define QTAWS_GETQUEUEATTRIBUTESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class GetQueueAttributesRequestPrivate;

class QTAWSSQS_EXPORT GetQueueAttributesRequest : public SqsRequest {

public:
    GetQueueAttributesRequest(const GetQueueAttributesRequest &other);
    GetQueueAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueueAttributesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
