// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATARETENTIONREQUEST_P_H
#define QTAWS_UPDATEDATARETENTIONREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "updatedataretentionrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateDataRetentionRequest;

class UpdateDataRetentionRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UpdateDataRetentionRequestPrivate(const KinesisVideoRequest::Action action,
                                   UpdateDataRetentionRequest * const q);
    UpdateDataRetentionRequestPrivate(const UpdateDataRetentionRequestPrivate &other,
                                   UpdateDataRetentionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataRetentionRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
