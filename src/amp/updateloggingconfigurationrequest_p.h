// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_P_H

#include "amprequest_p.h"
#include "updateloggingconfigurationrequest.h"

namespace QtAws {
namespace Amp {

class UpdateLoggingConfigurationRequest;

class UpdateLoggingConfigurationRequestPrivate : public AmpRequestPrivate {

public:
    UpdateLoggingConfigurationRequestPrivate(const AmpRequest::Action action,
                                   UpdateLoggingConfigurationRequest * const q);
    UpdateLoggingConfigurationRequestPrivate(const UpdateLoggingConfigurationRequestPrivate &other,
                                   UpdateLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
