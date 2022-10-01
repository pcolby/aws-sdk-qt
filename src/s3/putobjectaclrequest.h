// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTACLREQUEST_H
#define QTAWS_PUTOBJECTACLREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutObjectAclRequestPrivate;

class QTAWSS3_EXPORT PutObjectAclRequest : public S3Request {

public:
    PutObjectAclRequest(const PutObjectAclRequest &other);
    PutObjectAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
