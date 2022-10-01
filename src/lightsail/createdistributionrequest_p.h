// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONREQUEST_P_H
#define QTAWS_CREATEDISTRIBUTIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createdistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDistributionRequest;

class CreateDistributionRequestPrivate : public LightsailRequestPrivate {

public:
    CreateDistributionRequestPrivate(const LightsailRequest::Action action,
                                   CreateDistributionRequest * const q);
    CreateDistributionRequestPrivate(const CreateDistributionRequestPrivate &other,
                                   CreateDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
