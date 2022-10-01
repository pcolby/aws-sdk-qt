// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLEGALHOLDREQUEST_H
#define QTAWS_GETOBJECTLEGALHOLDREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectLegalHoldRequestPrivate;

class QTAWSS3_EXPORT GetObjectLegalHoldRequest : public S3Request {

public:
    GetObjectLegalHoldRequest(const GetObjectLegalHoldRequest &other);
    GetObjectLegalHoldRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectLegalHoldRequest)

};

} // namespace S3
} // namespace QtAws

#endif
