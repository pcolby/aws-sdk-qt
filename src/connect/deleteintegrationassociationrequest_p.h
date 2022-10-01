// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEINTEGRATIONASSOCIATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "deleteintegrationassociationrequest.h"

namespace QtAws {
namespace Connect {

class DeleteIntegrationAssociationRequest;

class DeleteIntegrationAssociationRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteIntegrationAssociationRequestPrivate(const ConnectRequest::Action action,
                                   DeleteIntegrationAssociationRequest * const q);
    DeleteIntegrationAssociationRequestPrivate(const DeleteIntegrationAssociationRequestPrivate &other,
                                   DeleteIntegrationAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationAssociationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
