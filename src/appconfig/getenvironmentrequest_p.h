// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_P_H
#define QTAWS_GETENVIRONMENTREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace AppConfig {

class GetEnvironmentRequest;

class GetEnvironmentRequestPrivate : public AppConfigRequestPrivate {

public:
    GetEnvironmentRequestPrivate(const AppConfigRequest::Action action,
                                   GetEnvironmentRequest * const q);
    GetEnvironmentRequestPrivate(const GetEnvironmentRequestPrivate &other,
                                   GetEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
