// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETERECOMMENDERCONFIGURATIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleterecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteRecommenderConfigurationRequest;

class DeleteRecommenderConfigurationRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteRecommenderConfigurationRequestPrivate(const PinpointRequest::Action action,
                                   DeleteRecommenderConfigurationRequest * const q);
    DeleteRecommenderConfigurationRequestPrivate(const DeleteRecommenderConfigurationRequestPrivate &other,
                                   DeleteRecommenderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
