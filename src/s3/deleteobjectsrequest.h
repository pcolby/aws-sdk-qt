// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSREQUEST_H
#define QTAWS_DELETEOBJECTSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteObjectsRequestPrivate;

class QTAWSS3_EXPORT DeleteObjectsRequest : public S3Request {

public:
    DeleteObjectsRequest(const DeleteObjectsRequest &other);
    DeleteObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
