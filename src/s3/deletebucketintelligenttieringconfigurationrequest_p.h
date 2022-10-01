// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketintelligenttieringconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketIntelligentTieringConfigurationRequest;

class DeleteBucketIntelligentTieringConfigurationRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketIntelligentTieringConfigurationRequestPrivate(const S3Request::Action action,
                                   DeleteBucketIntelligentTieringConfigurationRequest * const q);
    DeleteBucketIntelligentTieringConfigurationRequestPrivate(const DeleteBucketIntelligentTieringConfigurationRequestPrivate &other,
                                   DeleteBucketIntelligentTieringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketIntelligentTieringConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
