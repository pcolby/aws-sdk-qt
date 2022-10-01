// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUEREQUEST_P_H
#define QTAWS_CREATEQUEUEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "createqueuerequest.h"

namespace QtAws {
namespace MediaConvert {

class CreateQueueRequest;

class CreateQueueRequestPrivate : public MediaConvertRequestPrivate {

public:
    CreateQueueRequestPrivate(const MediaConvertRequest::Action action,
                                   CreateQueueRequest * const q);
    CreateQueueRequestPrivate(const CreateQueueRequestPrivate &other,
                                   CreateQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
