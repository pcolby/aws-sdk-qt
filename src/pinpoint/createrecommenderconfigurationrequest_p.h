// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATERECOMMENDERCONFIGURATIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createrecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateRecommenderConfigurationRequest;

class CreateRecommenderConfigurationRequestPrivate : public PinpointRequestPrivate {

public:
    CreateRecommenderConfigurationRequestPrivate(const PinpointRequest::Action action,
                                   CreateRecommenderConfigurationRequest * const q);
    CreateRecommenderConfigurationRequestPrivate(const CreateRecommenderConfigurationRequestPrivate &other,
                                   CreateRecommenderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
