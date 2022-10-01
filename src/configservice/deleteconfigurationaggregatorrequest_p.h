// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONAGGREGATORREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONAGGREGATORREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteconfigurationaggregatorrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationAggregatorRequest;

class DeleteConfigurationAggregatorRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteConfigurationAggregatorRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteConfigurationAggregatorRequest * const q);
    DeleteConfigurationAggregatorRequestPrivate(const DeleteConfigurationAggregatorRequestPrivate &other,
                                   DeleteConfigurationAggregatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationAggregatorRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
