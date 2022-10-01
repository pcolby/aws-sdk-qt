// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONREQUEST_P_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getrecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationRequest;

class GetRecommenderConfigurationRequestPrivate : public PinpointRequestPrivate {

public:
    GetRecommenderConfigurationRequestPrivate(const PinpointRequest::Action action,
                                   GetRecommenderConfigurationRequest * const q);
    GetRecommenderConfigurationRequestPrivate(const GetRecommenderConfigurationRequestPrivate &other,
                                   GetRecommenderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
