// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONRESPONSE_P_H

#include "kinesisvideoresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeImageGenerationConfigurationResponse;

class DescribeImageGenerationConfigurationResponsePrivate : public KinesisVideoResponsePrivate {

public:

    explicit DescribeImageGenerationConfigurationResponsePrivate(DescribeImageGenerationConfigurationResponse * const q);

    void parseDescribeImageGenerationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageGenerationConfigurationResponse)
    Q_DISABLE_COPY(DescribeImageGenerationConfigurationResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
