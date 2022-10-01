// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINASSOCIATIONREQUEST_H
#define QTAWS_DELETEDOMAINASSOCIATIONREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteDomainAssociationRequestPrivate;

class QTAWSAMPLIFY_EXPORT DeleteDomainAssociationRequest : public AmplifyRequest {

public:
    DeleteDomainAssociationRequest(const DeleteDomainAssociationRequest &other);
    DeleteDomainAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
