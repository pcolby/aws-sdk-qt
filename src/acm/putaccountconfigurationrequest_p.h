// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_P_H

#include "acmrequest_p.h"
#include "putaccountconfigurationrequest.h"

namespace QtAws {
namespace Acm {

class PutAccountConfigurationRequest;

class PutAccountConfigurationRequestPrivate : public AcmRequestPrivate {

public:
    PutAccountConfigurationRequestPrivate(const AcmRequest::Action action,
                                   PutAccountConfigurationRequest * const q);
    PutAccountConfigurationRequestPrivate(const PutAccountConfigurationRequestPrivate &other,
                                   PutAccountConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountConfigurationRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
