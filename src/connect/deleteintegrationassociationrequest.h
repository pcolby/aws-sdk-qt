// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONASSOCIATIONREQUEST_H
#define QTAWS_DELETEINTEGRATIONASSOCIATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteIntegrationAssociationRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteIntegrationAssociationRequest : public ConnectRequest {

public:
    DeleteIntegrationAssociationRequest(const DeleteIntegrationAssociationRequest &other);
    DeleteIntegrationAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationAssociationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
