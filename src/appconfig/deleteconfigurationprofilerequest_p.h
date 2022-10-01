// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONPROFILEREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONPROFILEREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deleteconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteConfigurationProfileRequest;

class DeleteConfigurationProfileRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteConfigurationProfileRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteConfigurationProfileRequest * const q);
    DeleteConfigurationProfileRequestPrivate(const DeleteConfigurationProfileRequestPrivate &other,
                                   DeleteConfigurationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
