// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRINCIPALMAPPINGREQUEST_P_H
#define QTAWS_DELETEPRINCIPALMAPPINGREQUEST_P_H

#include "kendrarequest_p.h"
#include "deleteprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class DeletePrincipalMappingRequest;

class DeletePrincipalMappingRequestPrivate : public KendraRequestPrivate {

public:
    DeletePrincipalMappingRequestPrivate(const KendraRequest::Action action,
                                   DeletePrincipalMappingRequest * const q);
    DeletePrincipalMappingRequestPrivate(const DeletePrincipalMappingRequestPrivate &other,
                                   DeletePrincipalMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
