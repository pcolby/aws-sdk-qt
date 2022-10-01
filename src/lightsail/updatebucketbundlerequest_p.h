// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETBUNDLEREQUEST_P_H
#define QTAWS_UPDATEBUCKETBUNDLEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatebucketbundlerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketBundleRequest;

class UpdateBucketBundleRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateBucketBundleRequestPrivate(const LightsailRequest::Action action,
                                   UpdateBucketBundleRequest * const q);
    UpdateBucketBundleRequestPrivate(const UpdateBucketBundleRequestPrivate &other,
                                   UpdateBucketBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBucketBundleRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
