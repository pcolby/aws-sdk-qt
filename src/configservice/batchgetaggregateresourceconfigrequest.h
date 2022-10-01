// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAGGREGATERESOURCECONFIGREQUEST_H
#define QTAWS_BATCHGETAGGREGATERESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetAggregateResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT BatchGetAggregateResourceConfigRequest : public ConfigServiceRequest {

public:
    BatchGetAggregateResourceConfigRequest(const BatchGetAggregateResourceConfigRequest &other);
    BatchGetAggregateResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
