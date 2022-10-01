// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETBUNDLESREQUEST_P_H
#define QTAWS_GETBUCKETBUNDLESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getbucketbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketBundlesRequest;

class GetBucketBundlesRequestPrivate : public LightsailRequestPrivate {

public:
    GetBucketBundlesRequestPrivate(const LightsailRequest::Action action,
                                   GetBucketBundlesRequest * const q);
    GetBucketBundlesRequestPrivate(const GetBucketBundlesRequestPrivate &other,
                                   GetBucketBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
