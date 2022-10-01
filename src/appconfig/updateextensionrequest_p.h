// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONREQUEST_P_H
#define QTAWS_UPDATEEXTENSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "updateextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionRequest;

class UpdateExtensionRequestPrivate : public AppConfigRequestPrivate {

public:
    UpdateExtensionRequestPrivate(const AppConfigRequest::Action action,
                                   UpdateExtensionRequest * const q);
    UpdateExtensionRequestPrivate(const UpdateExtensionRequestPrivate &other,
                                   UpdateExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
