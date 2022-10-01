// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUETAGSREQUEST_H
#define QTAWS_LISTQUEUETAGSREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class ListQueueTagsRequestPrivate;

class QTAWSSQS_EXPORT ListQueueTagsRequest : public SqsRequest {

public:
    ListQueueTagsRequest(const ListQueueTagsRequest &other);
    ListQueueTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueueTagsRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
