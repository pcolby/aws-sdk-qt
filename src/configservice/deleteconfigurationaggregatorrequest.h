// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONAGGREGATORREQUEST_H
#define QTAWS_DELETECONFIGURATIONAGGREGATORREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationAggregatorRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigurationAggregatorRequest : public ConfigServiceRequest {

public:
    DeleteConfigurationAggregatorRequest(const DeleteConfigurationAggregatorRequest &other);
    DeleteConfigurationAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationAggregatorRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
