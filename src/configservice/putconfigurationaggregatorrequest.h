// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONAGGREGATORREQUEST_H
#define QTAWS_PUTCONFIGURATIONAGGREGATORREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationAggregatorRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigurationAggregatorRequest : public ConfigServiceRequest {

public:
    PutConfigurationAggregatorRequest(const PutConfigurationAggregatorRequest &other);
    PutConfigurationAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationAggregatorRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
