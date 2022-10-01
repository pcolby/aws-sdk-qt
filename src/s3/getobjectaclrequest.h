// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTACLREQUEST_H
#define QTAWS_GETOBJECTACLREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectAclRequestPrivate;

class QTAWSS3_EXPORT GetObjectAclRequest : public S3Request {

public:
    GetObjectAclRequest(const GetObjectAclRequest &other);
    GetObjectAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
