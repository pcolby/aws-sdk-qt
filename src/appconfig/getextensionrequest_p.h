// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONREQUEST_P_H
#define QTAWS_GETEXTENSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionRequest;

class GetExtensionRequestPrivate : public AppConfigRequestPrivate {

public:
    GetExtensionRequestPrivate(const AppConfigRequest::Action action,
                                   GetExtensionRequest * const q);
    GetExtensionRequestPrivate(const GetExtensionRequestPrivate &other,
                                   GetExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
