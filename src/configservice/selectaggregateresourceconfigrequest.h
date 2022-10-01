// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTAGGREGATERESOURCECONFIGREQUEST_H
#define QTAWS_SELECTAGGREGATERESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class SelectAggregateResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT SelectAggregateResourceConfigRequest : public ConfigServiceRequest {

public:
    SelectAggregateResourceConfigRequest(const SelectAggregateResourceConfigRequest &other);
    SelectAggregateResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectAggregateResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
