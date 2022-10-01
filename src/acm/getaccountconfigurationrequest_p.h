// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTCONFIGURATIONREQUEST_P_H
#define QTAWS_GETACCOUNTCONFIGURATIONREQUEST_P_H

#include "acmrequest_p.h"
#include "getaccountconfigurationrequest.h"

namespace QtAws {
namespace Acm {

class GetAccountConfigurationRequest;

class GetAccountConfigurationRequestPrivate : public AcmRequestPrivate {

public:
    GetAccountConfigurationRequestPrivate(const AcmRequest::Action action,
                                   GetAccountConfigurationRequest * const q);
    GetAccountConfigurationRequestPrivate(const GetAccountConfigurationRequestPrivate &other,
                                   GetAccountConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountConfigurationRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
