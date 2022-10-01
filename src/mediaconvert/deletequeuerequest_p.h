// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEREQUEST_P_H
#define QTAWS_DELETEQUEUEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "deletequeuerequest.h"

namespace QtAws {
namespace MediaConvert {

class DeleteQueueRequest;

class DeleteQueueRequestPrivate : public MediaConvertRequestPrivate {

public:
    DeleteQueueRequestPrivate(const MediaConvertRequest::Action action,
                                   DeleteQueueRequest * const q);
    DeleteQueueRequestPrivate(const DeleteQueueRequestPrivate &other,
                                   DeleteQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
