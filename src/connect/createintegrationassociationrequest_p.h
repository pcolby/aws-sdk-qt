// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEINTEGRATIONASSOCIATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "createintegrationassociationrequest.h"

namespace QtAws {
namespace Connect {

class CreateIntegrationAssociationRequest;

class CreateIntegrationAssociationRequestPrivate : public ConnectRequestPrivate {

public:
    CreateIntegrationAssociationRequestPrivate(const ConnectRequest::Action action,
                                   CreateIntegrationAssociationRequest * const q);
    CreateIntegrationAssociationRequestPrivate(const CreateIntegrationAssociationRequestPrivate &other,
                                   CreateIntegrationAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationAssociationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
