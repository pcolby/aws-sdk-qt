// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUEUEREQUEST_P_H
#define QTAWS_UPDATEQUEUEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "updatequeuerequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateQueueRequest;

class UpdateQueueRequestPrivate : public MediaConvertRequestPrivate {

public:
    UpdateQueueRequestPrivate(const MediaConvertRequest::Action action,
                                   UpdateQueueRequest * const q);
    UpdateQueueRequestPrivate(const UpdateQueueRequestPrivate &other,
                                   UpdateQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
