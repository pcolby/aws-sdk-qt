// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_P_H
#define QTAWS_GETAPPLICATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace AppConfig {

class GetApplicationRequest;

class GetApplicationRequestPrivate : public AppConfigRequestPrivate {

public:
    GetApplicationRequestPrivate(const AppConfigRequest::Action action,
                                   GetApplicationRequest * const q);
    GetApplicationRequestPrivate(const GetApplicationRequestPrivate &other,
                                   GetApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
