// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketIntelligentTieringConfigurationRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketIntelligentTieringConfigurationRequest : public S3Request {

public:
    DeleteBucketIntelligentTieringConfigurationRequest(const DeleteBucketIntelligentTieringConfigurationRequest &other);
    DeleteBucketIntelligentTieringConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketIntelligentTieringConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
