// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTTAGGINGREQUEST_H
#define QTAWS_DELETEOBJECTTAGGINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteObjectTaggingRequestPrivate;

class QTAWSS3_EXPORT DeleteObjectTaggingRequest : public S3Request {

public:
    DeleteObjectTaggingRequest(const DeleteObjectTaggingRequest &other);
    DeleteObjectTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
