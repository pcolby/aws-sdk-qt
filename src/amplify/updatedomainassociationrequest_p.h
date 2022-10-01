// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEDOMAINASSOCIATIONREQUEST_P_H

#include "amplifyrequest_p.h"
#include "updatedomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateDomainAssociationRequest;

class UpdateDomainAssociationRequestPrivate : public AmplifyRequestPrivate {

public:
    UpdateDomainAssociationRequestPrivate(const AmplifyRequest::Action action,
                                   UpdateDomainAssociationRequest * const q);
    UpdateDomainAssociationRequestPrivate(const UpdateDomainAssociationRequestPrivate &other,
                                   UpdateDomainAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
