// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPRINCIPALMAPPINGREQUEST_P_H
#define QTAWS_PUTPRINCIPALMAPPINGREQUEST_P_H

#include "kendrarequest_p.h"
#include "putprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class PutPrincipalMappingRequest;

class PutPrincipalMappingRequestPrivate : public KendraRequestPrivate {

public:
    PutPrincipalMappingRequestPrivate(const KendraRequest::Action action,
                                   PutPrincipalMappingRequest * const q);
    PutPrincipalMappingRequestPrivate(const PutPrincipalMappingRequestPrivate &other,
                                   PutPrincipalMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
