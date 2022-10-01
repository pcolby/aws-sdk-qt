// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketIntelligentTieringConfigurationRequest;

class GetBucketIntelligentTieringConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketIntelligentTieringConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketIntelligentTieringConfigurationRequest * const q);
    GetBucketIntelligentTieringConfigurationRequestPrivate(const GetBucketIntelligentTieringConfigurationRequestPrivate &other,
                                   GetBucketIntelligentTieringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketIntelligentTieringConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
