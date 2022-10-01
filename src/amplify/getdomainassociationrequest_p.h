// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINASSOCIATIONREQUEST_P_H
#define QTAWS_GETDOMAINASSOCIATIONREQUEST_P_H

#include "amplifyrequest_p.h"
#include "getdomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class GetDomainAssociationRequest;

class GetDomainAssociationRequestPrivate : public AmplifyRequestPrivate {

public:
    GetDomainAssociationRequestPrivate(const AmplifyRequest::Action action,
                                   GetDomainAssociationRequest * const q);
    GetDomainAssociationRequestPrivate(const GetDomainAssociationRequestPrivate &other,
                                   GetDomainAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
