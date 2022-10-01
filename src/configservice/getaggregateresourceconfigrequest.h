// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATERESOURCECONFIGREQUEST_H
#define QTAWS_GETAGGREGATERESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateResourceConfigRequest : public ConfigServiceRequest {

public:
    GetAggregateResourceConfigRequest(const GetAggregateResourceConfigRequest &other);
    GetAggregateResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
