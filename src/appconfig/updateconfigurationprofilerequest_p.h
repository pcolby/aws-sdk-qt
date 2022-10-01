// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONPROFILEREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONPROFILEREQUEST_P_H

#include "appconfigrequest_p.h"
#include "updateconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateConfigurationProfileRequest;

class UpdateConfigurationProfileRequestPrivate : public AppConfigRequestPrivate {

public:
    UpdateConfigurationProfileRequestPrivate(const AppConfigRequest::Action action,
                                   UpdateConfigurationProfileRequest * const q);
    UpdateConfigurationProfileRequestPrivate(const UpdateConfigurationProfileRequestPrivate &other,
                                   UpdateConfigurationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
