// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGGREGATIONAUTHORIZATIONREQUEST_H
#define QTAWS_DELETEAGGREGATIONAUTHORIZATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteAggregationAuthorizationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteAggregationAuthorizationRequest : public ConfigServiceRequest {

public:
    DeleteAggregationAuthorizationRequest(const DeleteAggregationAuthorizationRequest &other);
    DeleteAggregationAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAggregationAuthorizationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
