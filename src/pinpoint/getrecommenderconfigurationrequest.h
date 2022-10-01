// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONREQUEST_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationRequestPrivate;

class QTAWSPINPOINT_EXPORT GetRecommenderConfigurationRequest : public PinpointRequest {

public:
    GetRecommenderConfigurationRequest(const GetRecommenderConfigurationRequest &other);
    GetRecommenderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
