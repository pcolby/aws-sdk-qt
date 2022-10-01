// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONRESPONSE_H

#include "s3controlresponse.h"
#include "deletebucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketLifecycleConfigurationResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteBucketLifecycleConfigurationResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteBucketLifecycleConfigurationResponse(const DeleteBucketLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketLifecycleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketLifecycleConfigurationResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
