// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONREQUEST_P_H
#define QTAWS_DELETEEXTENSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deleteextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionRequest;

class DeleteExtensionRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteExtensionRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteExtensionRequest * const q);
    DeleteExtensionRequestPrivate(const DeleteExtensionRequestPrivate &other,
                                   DeleteExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
