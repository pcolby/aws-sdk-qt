// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETLIFECYCLECONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketLifecycleConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketLifecycleConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketLifecycleConfigurationResponse(const GetBucketLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketLifecycleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(GetBucketLifecycleConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
