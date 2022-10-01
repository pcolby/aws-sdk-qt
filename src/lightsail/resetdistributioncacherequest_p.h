// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDISTRIBUTIONCACHEREQUEST_P_H
#define QTAWS_RESETDISTRIBUTIONCACHEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "resetdistributioncacherequest.h"

namespace QtAws {
namespace Lightsail {

class ResetDistributionCacheRequest;

class ResetDistributionCacheRequestPrivate : public LightsailRequestPrivate {

public:
    ResetDistributionCacheRequestPrivate(const LightsailRequest::Action action,
                                   ResetDistributionCacheRequest * const q);
    ResetDistributionCacheRequestPrivate(const ResetDistributionCacheRequestPrivate &other,
                                   ResetDistributionCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetDistributionCacheRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
