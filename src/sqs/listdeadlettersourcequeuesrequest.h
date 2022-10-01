// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEADLETTERSOURCEQUEUESREQUEST_H
#define QTAWS_LISTDEADLETTERSOURCEQUEUESREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class ListDeadLetterSourceQueuesRequestPrivate;

class QTAWSSQS_EXPORT ListDeadLetterSourceQueuesRequest : public SqsRequest {

public:
    ListDeadLetterSourceQueuesRequest(const ListDeadLetterSourceQueuesRequest &other);
    ListDeadLetterSourceQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeadLetterSourceQueuesRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
