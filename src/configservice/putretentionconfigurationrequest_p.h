// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTRETENTIONCONFIGURATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "putretentionconfigurationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRetentionConfigurationRequest;

class PutRetentionConfigurationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutRetentionConfigurationRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutRetentionConfigurationRequest * const q);
    PutRetentionConfigurationRequestPrivate(const PutRetentionConfigurationRequestPrivate &other,
                                   PutRetentionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRetentionConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
