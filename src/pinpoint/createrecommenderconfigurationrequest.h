// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERCONFIGURATIONREQUEST_H
#define QTAWS_CREATERECOMMENDERCONFIGURATIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateRecommenderConfigurationRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateRecommenderConfigurationRequest : public PinpointRequest {

public:
    CreateRecommenderConfigurationRequest(const CreateRecommenderConfigurationRequest &other);
    CreateRecommenderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
