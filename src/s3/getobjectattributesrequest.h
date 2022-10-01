// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESREQUEST_H
#define QTAWS_GETOBJECTATTRIBUTESREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectAttributesRequestPrivate;

class QTAWSS3_EXPORT GetObjectAttributesRequest : public S3Request {

public:
    GetObjectAttributesRequest(const GetObjectAttributesRequest &other);
    GetObjectAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectAttributesRequest)

};

} // namespace S3
} // namespace QtAws

#endif
