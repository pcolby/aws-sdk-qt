// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONASSOCIATIONREQUEST_H
#define QTAWS_CREATEINTEGRATIONASSOCIATIONREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateIntegrationAssociationRequestPrivate;

class QTAWSCONNECT_EXPORT CreateIntegrationAssociationRequest : public ConnectRequest {

public:
    CreateIntegrationAssociationRequest(const CreateIntegrationAssociationRequest &other);
    CreateIntegrationAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationAssociationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
