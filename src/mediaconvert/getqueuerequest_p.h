// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEREQUEST_P_H
#define QTAWS_GETQUEUEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "getqueuerequest.h"

namespace QtAws {
namespace MediaConvert {

class GetQueueRequest;

class GetQueueRequestPrivate : public MediaConvertRequestPrivate {

public:
    GetQueueRequestPrivate(const MediaConvertRequest::Action action,
                                   GetQueueRequest * const q);
    GetQueueRequestPrivate(const GetQueueRequestPrivate &other,
                                   GetQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
