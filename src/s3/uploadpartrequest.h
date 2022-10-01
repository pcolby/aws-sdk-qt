// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTREQUEST_H
#define QTAWS_UPLOADPARTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class UploadPartRequestPrivate;

class QTAWSS3_EXPORT UploadPartRequest : public S3Request {

public:
    UploadPartRequest(const UploadPartRequest &other);
    UploadPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadPartRequest)

};

} // namespace S3
} // namespace QtAws

#endif
