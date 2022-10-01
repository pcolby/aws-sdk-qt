// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONRESPONSE_H

#include "kinesisvideoresponse.h"
#include "describeimagegenerationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeImageGenerationConfigurationResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeImageGenerationConfigurationResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    DescribeImageGenerationConfigurationResponse(const DescribeImageGenerationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageGenerationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageGenerationConfigurationResponse)
    Q_DISABLE_COPY(DescribeImageGenerationConfigurationResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
