// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "describeimagegenerationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeImageGenerationConfigurationRequest;

class DescribeImageGenerationConfigurationRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DescribeImageGenerationConfigurationRequestPrivate(const KinesisVideoRequest::Action action,
                                   DescribeImageGenerationConfigurationRequest * const q);
    DescribeImageGenerationConfigurationRequestPrivate(const DescribeImageGenerationConfigurationRequestPrivate &other,
                                   DescribeImageGenerationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageGenerationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
