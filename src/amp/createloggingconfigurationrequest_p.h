// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATELOGGINGCONFIGURATIONREQUEST_P_H

#include "amprequest_p.h"
#include "createloggingconfigurationrequest.h"

namespace QtAws {
namespace Amp {

class CreateLoggingConfigurationRequest;

class CreateLoggingConfigurationRequestPrivate : public AmpRequestPrivate {

public:
    CreateLoggingConfigurationRequestPrivate(const AmpRequest::Action action,
                                   CreateLoggingConfigurationRequest * const q);
    CreateLoggingConfigurationRequestPrivate(const CreateLoggingConfigurationRequestPrivate &other,
                                   CreateLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
