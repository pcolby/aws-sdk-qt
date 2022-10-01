// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETERETENTIONCONFIGURATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteretentionconfigurationrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRetentionConfigurationRequest;

class DeleteRetentionConfigurationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteRetentionConfigurationRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteRetentionConfigurationRequest * const q);
    DeleteRetentionConfigurationRequestPrivate(const DeleteRetentionConfigurationRequestPrivate &other,
                                   DeleteRetentionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRetentionConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
