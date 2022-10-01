// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSREQUEST_P_H
#define QTAWS_CREATETAGSREQUEST_P_H

#include "mqrequest_p.h"
#include "createtagsrequest.h"

namespace QtAws {
namespace Mq {

class CreateTagsRequest;

class CreateTagsRequestPrivate : public MqRequestPrivate {

public:
    CreateTagsRequestPrivate(const MqRequest::Action action,
                                   CreateTagsRequest * const q);
    CreateTagsRequestPrivate(const CreateTagsRequestPrivate &other,
                                   CreateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTagsRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
