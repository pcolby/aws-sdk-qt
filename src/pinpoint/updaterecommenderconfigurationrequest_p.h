// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATERECOMMENDERCONFIGURATIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updaterecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateRecommenderConfigurationRequest;

class UpdateRecommenderConfigurationRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateRecommenderConfigurationRequestPrivate(const PinpointRequest::Action action,
                                   UpdateRecommenderConfigurationRequest * const q);
    UpdateRecommenderConfigurationRequestPrivate(const UpdateRecommenderConfigurationRequestPrivate &other,
                                   UpdateRecommenderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
