// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRECORDERREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONRECORDERREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationRecorderRequest;

class DeleteConfigurationRecorderRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteConfigurationRecorderRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteConfigurationRecorderRequest * const q);
    DeleteConfigurationRecorderRequestPrivate(const DeleteConfigurationRecorderRequestPrivate &other,
                                   DeleteConfigurationRecorderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
