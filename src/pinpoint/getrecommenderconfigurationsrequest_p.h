// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONSREQUEST_P_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getrecommenderconfigurationsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationsRequest;

class GetRecommenderConfigurationsRequestPrivate : public PinpointRequestPrivate {

public:
    GetRecommenderConfigurationsRequestPrivate(const PinpointRequest::Action action,
                                   GetRecommenderConfigurationsRequest * const q);
    GetRecommenderConfigurationsRequestPrivate(const GetRecommenderConfigurationsRequestPrivate &other,
                                   GetRecommenderConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommenderConfigurationsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
