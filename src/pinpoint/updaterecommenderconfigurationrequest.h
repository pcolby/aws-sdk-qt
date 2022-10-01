// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERCONFIGURATIONREQUEST_H
#define QTAWS_UPDATERECOMMENDERCONFIGURATIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateRecommenderConfigurationRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateRecommenderConfigurationRequest : public PinpointRequest {

public:
    UpdateRecommenderConfigurationRequest(const UpdateRecommenderConfigurationRequest &other);
    UpdateRecommenderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
