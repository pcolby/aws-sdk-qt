// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICREQUEST_P_H
#define QTAWS_CREATETOPICREQUEST_P_H

#include "snsrequest_p.h"
#include "createtopicrequest.h"

namespace QtAws {
namespace Sns {

class CreateTopicRequest;

class CreateTopicRequestPrivate : public SnsRequestPrivate {

public:
    CreateTopicRequestPrivate(const SnsRequest::Action action,
                                   CreateTopicRequest * const q);
    CreateTopicRequestPrivate(const CreateTopicRequestPrivate &other,
                                   CreateTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTopicRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
