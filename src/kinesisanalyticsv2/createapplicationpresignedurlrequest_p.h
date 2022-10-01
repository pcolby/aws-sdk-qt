// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONPRESIGNEDURLREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONPRESIGNEDURLREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "createapplicationpresignedurlrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationPresignedUrlRequest;

class CreateApplicationPresignedUrlRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    CreateApplicationPresignedUrlRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   CreateApplicationPresignedUrlRequest * const q);
    CreateApplicationPresignedUrlRequestPrivate(const CreateApplicationPresignedUrlRequestPrivate &other,
                                   CreateApplicationPresignedUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationPresignedUrlRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
