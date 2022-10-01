// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketIntelligentTieringConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutBucketIntelligentTieringConfigurationRequest : public S3Request {

public:
    PutBucketIntelligentTieringConfigurationRequest(const PutBucketIntelligentTieringConfigurationRequest &other);
    PutBucketIntelligentTieringConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketIntelligentTieringConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
