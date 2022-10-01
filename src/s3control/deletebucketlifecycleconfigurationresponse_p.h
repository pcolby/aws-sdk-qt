// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketLifecycleConfigurationResponse;

class DeleteBucketLifecycleConfigurationResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteBucketLifecycleConfigurationResponsePrivate(DeleteBucketLifecycleConfigurationResponse * const q);

    void parseDeleteBucketLifecycleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketLifecycleConfigurationResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
