// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSREQUEST_P_H
#define QTAWS_GETRESERVEDNODEEXCHANGECONFIGURATIONOPTIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "getreservednodeexchangeconfigurationoptionsrequest.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeConfigurationOptionsRequest;

class GetReservedNodeExchangeConfigurationOptionsRequestPrivate : public RedshiftRequestPrivate {

public:
    GetReservedNodeExchangeConfigurationOptionsRequestPrivate(const RedshiftRequest::Action action,
                                   GetReservedNodeExchangeConfigurationOptionsRequest * const q);
    GetReservedNodeExchangeConfigurationOptionsRequestPrivate(const GetReservedNodeExchangeConfigurationOptionsRequestPrivate &other,
                                   GetReservedNodeExchangeConfigurationOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservedNodeExchangeConfigurationOptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
