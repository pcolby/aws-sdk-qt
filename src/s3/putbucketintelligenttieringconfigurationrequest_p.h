// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketIntelligentTieringConfigurationRequest;

class PutBucketIntelligentTieringConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketIntelligentTieringConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketIntelligentTieringConfigurationRequest * const q);
    PutBucketIntelligentTieringConfigurationRequestPrivate(const PutBucketIntelligentTieringConfigurationRequestPrivate &other,
                                   PutBucketIntelligentTieringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketIntelligentTieringConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
