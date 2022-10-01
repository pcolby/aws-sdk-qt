// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONPROFILEREQUEST_P_H
#define QTAWS_GETCONFIGURATIONPROFILEREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationProfileRequest;

class GetConfigurationProfileRequestPrivate : public AppConfigRequestPrivate {

public:
    GetConfigurationProfileRequestPrivate(const AppConfigRequest::Action action,
                                   GetConfigurationProfileRequest * const q);
    GetConfigurationProfileRequestPrivate(const GetConfigurationProfileRequestPrivate &other,
                                   GetConfigurationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
