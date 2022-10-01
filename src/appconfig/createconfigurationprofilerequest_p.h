// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONPROFILEREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONPROFILEREQUEST_P_H

#include "appconfigrequest_p.h"
#include "createconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class CreateConfigurationProfileRequest;

class CreateConfigurationProfileRequestPrivate : public AppConfigRequestPrivate {

public:
    CreateConfigurationProfileRequestPrivate(const AppConfigRequest::Action action,
                                   CreateConfigurationProfileRequest * const q);
    CreateConfigurationProfileRequestPrivate(const CreateConfigurationProfileRequestPrivate &other,
                                   CreateConfigurationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
