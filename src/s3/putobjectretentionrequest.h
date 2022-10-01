// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRETENTIONREQUEST_H
#define QTAWS_PUTOBJECTRETENTIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutObjectRetentionRequestPrivate;

class QTAWSS3_EXPORT PutObjectRetentionRequest : public S3Request {

public:
    PutObjectRetentionRequest(const PutObjectRetentionRequest &other);
    PutObjectRetentionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectRetentionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
