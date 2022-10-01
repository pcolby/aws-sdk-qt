// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONREQUEST_P_H
#define QTAWS_UPDATEDISTRIBUTIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatedistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionRequest;

class UpdateDistributionRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateDistributionRequestPrivate(const LightsailRequest::Action action,
                                   UpdateDistributionRequest * const q);
    UpdateDistributionRequestPrivate(const UpdateDistributionRequestPrivate &other,
                                   UpdateDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
