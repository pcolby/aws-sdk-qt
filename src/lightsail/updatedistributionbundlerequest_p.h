// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONBUNDLEREQUEST_P_H
#define QTAWS_UPDATEDISTRIBUTIONBUNDLEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatedistributionbundlerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionBundleRequest;

class UpdateDistributionBundleRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateDistributionBundleRequestPrivate(const LightsailRequest::Action action,
                                   UpdateDistributionBundleRequest * const q);
    UpdateDistributionBundleRequestPrivate(const UpdateDistributionBundleRequestPrivate &other,
                                   UpdateDistributionBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionBundleRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
