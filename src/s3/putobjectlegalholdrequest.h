// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLEGALHOLDREQUEST_H
#define QTAWS_PUTOBJECTLEGALHOLDREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutObjectLegalHoldRequestPrivate;

class QTAWSS3_EXPORT PutObjectLegalHoldRequest : public S3Request {

public:
    PutObjectLegalHoldRequest(const PutObjectLegalHoldRequest &other);
    PutObjectLegalHoldRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectLegalHoldRequest)

};

} // namespace S3
} // namespace QtAws

#endif
