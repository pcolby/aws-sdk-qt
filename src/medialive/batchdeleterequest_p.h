// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEREQUEST_P_H
#define QTAWS_BATCHDELETEREQUEST_P_H

#include "medialiverequest_p.h"
#include "batchdeleterequest.h"

namespace QtAws {
namespace MediaLive {

class BatchDeleteRequest;

class BatchDeleteRequestPrivate : public MediaLiveRequestPrivate {

public:
    BatchDeleteRequestPrivate(const MediaLiveRequest::Action action,
                                   BatchDeleteRequest * const q);
    BatchDeleteRequestPrivate(const BatchDeleteRequestPrivate &other,
                                   BatchDeleteRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
