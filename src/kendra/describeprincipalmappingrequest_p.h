// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALMAPPINGREQUEST_P_H
#define QTAWS_DESCRIBEPRINCIPALMAPPINGREQUEST_P_H

#include "kendrarequest_p.h"
#include "describeprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class DescribePrincipalMappingRequest;

class DescribePrincipalMappingRequestPrivate : public KendraRequestPrivate {

public:
    DescribePrincipalMappingRequestPrivate(const KendraRequest::Action action,
                                   DescribePrincipalMappingRequest * const q);
    DescribePrincipalMappingRequestPrivate(const DescribePrincipalMappingRequestPrivate &other,
                                   DescribePrincipalMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
