// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRETENTIONREQUEST_H
#define QTAWS_GETOBJECTRETENTIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectRetentionRequestPrivate;

class QTAWSS3_EXPORT GetObjectRetentionRequest : public S3Request {

public:
    GetObjectRetentionRequest(const GetObjectRetentionRequest &other);
    GetObjectRetentionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectRetentionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
