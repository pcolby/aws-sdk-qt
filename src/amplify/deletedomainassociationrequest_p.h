// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEDOMAINASSOCIATIONREQUEST_P_H

#include "amplifyrequest_p.h"
#include "deletedomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteDomainAssociationRequest;

class DeleteDomainAssociationRequestPrivate : public AmplifyRequestPrivate {

public:
    DeleteDomainAssociationRequestPrivate(const AmplifyRequest::Action action,
                                   DeleteDomainAssociationRequest * const q);
    DeleteDomainAssociationRequestPrivate(const DeleteDomainAssociationRequestPrivate &other,
                                   DeleteDomainAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
