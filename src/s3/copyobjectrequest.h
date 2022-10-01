// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOBJECTREQUEST_H
#define QTAWS_COPYOBJECTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class CopyObjectRequestPrivate;

class QTAWSS3_EXPORT CopyObjectRequest : public S3Request {

public:
    CopyObjectRequest(const CopyObjectRequest &other);
    CopyObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
