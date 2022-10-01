// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAGGREGATIONAUTHORIZATIONREQUEST_H
#define QTAWS_PUTAGGREGATIONAUTHORIZATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutAggregationAuthorizationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutAggregationAuthorizationRequest : public ConfigServiceRequest {

public:
    PutAggregationAuthorizationRequest(const PutAggregationAuthorizationRequest &other);
    PutAggregationAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAggregationAuthorizationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
