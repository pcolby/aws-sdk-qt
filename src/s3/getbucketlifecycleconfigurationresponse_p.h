// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketLifecycleConfigurationResponse;

class GetBucketLifecycleConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketLifecycleConfigurationResponsePrivate(GetBucketLifecycleConfigurationResponse * const q);

    void parseGetBucketLifecycleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(GetBucketLifecycleConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
