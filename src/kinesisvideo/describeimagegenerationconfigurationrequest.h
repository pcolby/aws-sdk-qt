// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEIMAGEGENERATIONCONFIGURATIONREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeImageGenerationConfigurationRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeImageGenerationConfigurationRequest : public KinesisVideoRequest {

public:
    DescribeImageGenerationConfigurationRequest(const DescribeImageGenerationConfigurationRequest &other);
    DescribeImageGenerationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageGenerationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
