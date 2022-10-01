// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHBATCHREQUEST_P_H
#define QTAWS_PUBLISHBATCHREQUEST_P_H

#include "snsrequest_p.h"
#include "publishbatchrequest.h"

namespace QtAws {
namespace Sns {

class PublishBatchRequest;

class PublishBatchRequestPrivate : public SnsRequestPrivate {

public:
    PublishBatchRequestPrivate(const SnsRequest::Action action,
                                   PublishBatchRequest * const q);
    PublishBatchRequestPrivate(const PublishBatchRequestPrivate &other,
                                   PublishBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishBatchRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
