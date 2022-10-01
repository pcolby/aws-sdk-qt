// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONSREQUEST_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetRecommenderConfigurationsRequest : public PinpointRequest {

public:
    GetRecommenderConfigurationsRequest(const GetRecommenderConfigurationsRequest &other);
    GetRecommenderConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommenderConfigurationsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
