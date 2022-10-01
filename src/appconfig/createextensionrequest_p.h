// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONREQUEST_P_H
#define QTAWS_CREATEEXTENSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "createextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionRequest;

class CreateExtensionRequestPrivate : public AppConfigRequestPrivate {

public:
    CreateExtensionRequestPrivate(const AppConfigRequest::Action action,
                                   CreateExtensionRequest * const q);
    CreateExtensionRequestPrivate(const CreateExtensionRequestPrivate &other,
                                   CreateExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
