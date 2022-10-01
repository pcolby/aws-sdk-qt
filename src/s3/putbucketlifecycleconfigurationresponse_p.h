// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketLifecycleConfigurationResponse;

class PutBucketLifecycleConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketLifecycleConfigurationResponsePrivate(PutBucketLifecycleConfigurationResponse * const q);

    void parsePutBucketLifecycleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(PutBucketLifecycleConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
