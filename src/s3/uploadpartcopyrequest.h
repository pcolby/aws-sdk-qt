// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTCOPYREQUEST_H
#define QTAWS_UPLOADPARTCOPYREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class UploadPartCopyRequestPrivate;

class QTAWSS3_EXPORT UploadPartCopyRequest : public S3Request {

public:
    UploadPartCopyRequest(const UploadPartCopyRequest &other);
    UploadPartCopyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadPartCopyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
