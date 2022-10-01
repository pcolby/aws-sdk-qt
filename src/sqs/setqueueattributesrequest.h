// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETQUEUEATTRIBUTESREQUEST_H
#define QTAWS_SETQUEUEATTRIBUTESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class SetQueueAttributesRequestPrivate;

class QTAWSSQS_EXPORT SetQueueAttributesRequest : public SqsRequest {

public:
    SetQueueAttributesRequest(const SetQueueAttributesRequest &other);
    SetQueueAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetQueueAttributesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
