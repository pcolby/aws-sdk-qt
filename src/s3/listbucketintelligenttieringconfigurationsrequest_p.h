// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketintelligenttieringconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketIntelligentTieringConfigurationsRequest;

class ListBucketIntelligentTieringConfigurationsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketIntelligentTieringConfigurationsRequestPrivate(const S3Request::Action action,
                                   ListBucketIntelligentTieringConfigurationsRequest * const q);
    ListBucketIntelligentTieringConfigurationsRequestPrivate(const ListBucketIntelligentTieringConfigurationsRequestPrivate &other,
                                   ListBucketIntelligentTieringConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketIntelligentTieringConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
