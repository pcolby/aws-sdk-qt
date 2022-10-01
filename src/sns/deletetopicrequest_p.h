// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICREQUEST_P_H
#define QTAWS_DELETETOPICREQUEST_P_H

#include "snsrequest_p.h"
#include "deletetopicrequest.h"

namespace QtAws {
namespace Sns {

class DeleteTopicRequest;

class DeleteTopicRequestPrivate : public SnsRequestPrivate {

public:
    DeleteTopicRequestPrivate(const SnsRequest::Action action,
                                   DeleteTopicRequest * const q);
    DeleteTopicRequestPrivate(const DeleteTopicRequestPrivate &other,
                                   DeleteTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTopicRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
