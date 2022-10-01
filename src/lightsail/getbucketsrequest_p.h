// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSREQUEST_P_H
#define QTAWS_GETBUCKETSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getbucketsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketsRequest;

class GetBucketsRequestPrivate : public LightsailRequestPrivate {

public:
    GetBucketsRequestPrivate(const LightsailRequest::Action action,
                                   GetBucketsRequest * const q);
    GetBucketsRequestPrivate(const GetBucketsRequestPrivate &other,
                                   GetBucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
